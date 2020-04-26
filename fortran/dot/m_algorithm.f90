
module m_algorithm
  implicit none

  private
  public :: algorithm_real64_t

  type algorithm_real64_t
  contains
    procedure :: sort => algorithm_real64_sort
    procedure :: dot => algorithm_real64_dot
    !procedure :: reduce => algorithm_real64_reduce_by_bucket
    procedure :: reduce => algorithm_real64_reduce_by_sort
    procedure :: swap => algorithm_real64_swap
    procedure :: vector_normalise => algorithm_real64_normalise
    procedure :: vector_inv_normalise => algorithm_real64_inv_normalise
  end type algorithm_real64_t

contains

  subroutine algorithm_real64_normalise(this, st, ed, vect, elem_max, elem_min)
    use iso_fortran_env, only: real64
    implicit none
    class (algorithm_real64_t) :: this
    integer, intent(in) :: st, ed
    integer :: i
    real(real64), intent(in) :: elem_max, elem_min
    real(real64), intent(inout) :: vect(st:ed)

    do i=st,ed
      if (vect(i) == 0.0d0) cycle
      if (vect(i) > 0.0d0) vect(i) = vect(i) * (1.0d0 / elem_max)
      if (vect(i) < 0.0d0) vect(i) = vect(i) * (1.0d0 / -elem_min)
    end do
  end subroutine algorithm_real64_normalise

  subroutine algorithm_real64_inv_normalise(this, st, ed, vect, elem_max, elem_min)
    use iso_fortran_env, only: real64
    implicit none
    class (algorithm_real64_t) :: this
    integer, intent(in) :: st, ed
    integer :: i
    real(real64), intent(in) :: elem_max, elem_min
    real(real64), intent(inout) :: vect(st:ed)

    do i=st,ed
      if (vect(i) == 0.0d0) cycle
      if (vect(i) > 0.0d0) vect(i) = vect(i) * elem_max
      if (vect(i) < 0.0d0) vect(i) = vect(i) * -elem_min
    end do
  end subroutine algorithm_real64_inv_normalise 

  subroutine algorithm_real64_swap(this, a, b)
    use iso_fortran_env, only: real64
    implicit none
    class (algorithm_real64_t) :: this
    real(real64), intent(inout) :: a, b
    real(real64) :: tmp

    tmp = a; a = b; b = tmp
    
  end subroutine algorithm_real64_swap

  !!
  !! time: O(n log n)
  !! space: O(1)
  !!
  recursive subroutine algorithm_real64_sort(this, st, ed, vect)
    use iso_fortran_env, only: real64
    implicit none
    class (algorithm_real64_t) :: this
    integer, intent(in) :: st, ed
    integer :: i, j
    real(real64) :: vect(st:ed)
    real(real64) :: pivot

    if (st >= ed) return

    i = st; j = ed
    pivot = vect(i + (j-i)/2)

    do 
      do while(vect(i)<pivot); i=i+1; end do
      do while(vect(j)>pivot); j=j-1; end do

      if (i>=j) exit

      call this%swap(vect(i), vect(j))
  
      j = j - 1 
      i = i + 1
    end do

    call this%sort(st, i-1, vect)
    call this%sort(j+1, ed, vect)

  end subroutine algorithm_real64_sort

  function algorithm_real64_dot(this, st, ed, vect1, vect2) result(accm)
    use iso_fortran_env, only: real64
    implicit none
    class (algorithm_real64_t) :: this
    integer :: st, ed
    real(real64) :: accm
    real(real64) :: vect1(st:ed), vect2(st:ed), tmp1(st:ed), tmp2(st:ed), &
                    elem_max, elem_min, c, y, t

    elem_max = maxval(vect1)
    elem_min = minval(vect1)

    tmp1(:) = vect1(:)
    tmp2(:) = vect2(:)

    call this%sort(st, ed, tmp1)
    call this%sort(st, ed, tmp2)

    accm = dot_product(tmp1, tmp2) 
       
  end function algorithm_real64_dot

  !!
  !! time: O(n log n)
  !! space: O(n)
  !!
  function algorithm_real64_reduce_by_sort(this, st, ed, vect) result(accm)
    use iso_fortran_env, only: real64
    implicit none
    class(algorithm_real64_t) :: this
    integer, intent(in) :: st, ed
    integer :: i, mid
    real(real64) :: vect(st:ed), tmp(st:ed), elem_max, elem_min, accm, c, y, t, partial_sum

    elem_max = maxval(vect)
    elem_min = minval(vect)

    tmp(:) = vect(:)

    call this % vector_normalise(st, ed, tmp, elem_max, elem_min)
    call this%sort(st, ed, tmp)

    partial_sum = 0.0d0
    c = 0.0d0
    accm = 0.0d0

    !! negative sum
    do i=st,ed
      mid = i
      if (tmp(i) >= 0.0d0) exit
      y = tmp(i) - c
      t = partial_sum + y 
      c = (t - partial_sum) - y
      partial_sum = t
    end do
    accm = partial_sum * -elem_min

    !! positive sum
    partial_sum = 0.0d0
    c = 0.0d0
    do i=mid,ed
      y = tmp(i) - c
      t = partial_sum + y 
      c = (t - partial_sum) - y
      partial_sum = t
    end do
    accm = accm + partial_sum * elem_max

    call this % vector_inv_normalise(st, ed, tmp, elem_max, elem_min)

  end function algorithm_real64_reduce_by_sort

  function algorithm_real64_reduce_by_bucket(this, st, ed, vect) result(accm)
    use iso_fortran_env, only: real64
    implicit none
    class(algorithm_real64_t) :: this
    integer :: st, ed
    integer :: i, mid
    real(real64) :: vect(st:ed), tmp(st:ed), elem_max, elem_min, accm, c, y, t, partial_sum

    elem_max = maxval(vect)
    elem_min = minval(vect)

    call this % vector_normalise(st, ed, tmp, elem_max, elem_min)
    call this%sort(st, ed, tmp)

    accm = 0.0d0
    c = 0.0d0

    !! negative sum
    do i=st,ed
      mid = i
      if (tmp(i) >= 0.0d0) exit
      y = tmp(i) - c
      t = partial_sum + y 
      c = (t - partial_sum) - y
      partial_sum = t
    end do
    accm = partial_sum * -elem_min

    !! positive sum
    partial_sum = 0.0d0
    c = 0.0d0
    do i=mid,ed
      y = tmp(i) - c
      t = partial_sum + y 
      c = (t - partial_sum) - y
      partial_sum = t
    end do
    accm = accm + partial_sum * elem_max

    call this % vector_inv_normalise(st, ed, tmp, elem_max, elem_min)
  end function algorithm_real64_reduce_by_bucket

end module m_algorithm
