!==============================================================================
module geometry
!==============================================================================
  use iso_fortran_env, only: real64
  implicit none

  type vector3_t
    real(real64) :: comp(1:3)
  end type vector3_t

  type geometry_t
  contains
    procedure :: quicksort => geometry_quicksort
    procedure :: pivot => geometry_pivot
  end type geometry_t

contains

  recursive subroutine geometry_quicksort(this, coord, left, right, compare)
    implicit none
    class(geometry_t) :: this
    type(vector3_t) :: coord(:)
    type(vector3_t) :: pivot, tmp
    integer, intent(in) :: left, right
    integer :: i, j
    logical, external :: compare

    i = left
    j = right

    if (i > j) return

    pivot = this % pivot(coord, left, right) 

    do while (.true.)

      do while (compare(coord(i), pivot)); i = i + 1; end do
      do while (compare(pivot, coord(j))); j = j - 1; end do

      if (i>=j) exit

      tmp = coord(i) 
      coord(i) = coord(j) 
      coord(j) = tmp

      i = i + 1
      j = j - 1

    end do


    call this % quicksort(coord, left, i-1, compare)
    call this % quicksort(coord, j+1, right, compare)

  end subroutine geometry_quicksort

  function geometry_pivot(this, coord, left, right) result(ave)
    implicit none
    class(geometry_t) :: this
    integer, intent(in) :: left, right
    type(vector3_t), intent(in) :: coord(:)
    type(vector3_t) :: ave

    ave = coord((left + right)/2)

  end function geometry_pivot

end module geometry

!------------------------------------------------------------------------------
logical function compare(coord1, coord2)
!------------------------------------------------------------------------------
  use iso_fortran_env, only: real64
  use geometry
  implicit none
  type(vector3_t), intent(in) :: coord1, coord2
  real(real64) :: val(1:2)

  val(1) = coord1 % comp(1) &
         + coord1 % comp(2) * 1.0d-6&
         + coord1 % comp(3) * 1.0d-12

  val(2) = coord2 % comp(1) &
         + coord2 % comp(2) * 1.0d-6&
         + coord2 % comp(3) * 1.0d-12

  compare = val(1) < val(2)

end function compare

!------------------------------------------------------------------------------
program main
!------------------------------------------------------------------------------
  use geometry
  implicit none

  type(vector3_t) :: coord(8)
  type(geometry_t) :: space
  logical, external :: compare
  integer :: i

  coord(1)%comp(1) = 1.0d0;  coord(1)%comp(2) = 0.03d0;   coord(1)%comp(3) = 0.9d0
  coord(2)%comp(1) = 1.9d0;  coord(2)%comp(2) = -0.03d0;  coord(2)%comp(3) = 0.4d0
  coord(3)%comp(1) = -1.0d0; coord(3)%comp(2) = 5.03d0;   coord(3)%comp(3) = 1.9d0
  coord(4)%comp(1) = -7.0d0; coord(4)%comp(2) = -5.05d0;  coord(4)%comp(3) = 4.9d0
  coord(5)%comp(1) = -5.0d0; coord(5)%comp(2) = 6.03d0;   coord(5)%comp(3) = -1.9d0
  coord(6)%comp(1) = 9.0d0;  coord(6)%comp(2) = 8.93d0;   coord(6)%comp(3) = 1.4d0
  coord(7)%comp(1) = 8.1d0;  coord(7)%comp(2) = 12.0d0;   coord(7)%comp(3) = 1.8d0
  coord(8)%comp(1) = -1.3d0; coord(8)%comp(2) = -5.924d0; coord(8)%comp(3) = 5.9d0

  write(*,*) "=== input"
  do i=1,size(coord)
    write(*,*) coord(i)%comp(1), coord(i)%comp(2), coord(i)%comp(3)
  end do

  call space % quicksort(coord, 1, size(coord), compare) 

  write(*,*) "=== sorted"
  do i=1,size(coord)
    write(*,*) coord(i)%comp(1), coord(i)%comp(2), coord(i)%comp(3)
  end do

! === input
!   1.0000000000000000        2.9999999999999999E-002  0.90000000000000002
!   1.8999999999999999       -2.9999999999999999E-002  0.40000000000000002
!  -1.0000000000000000        5.0300000000000002        1.8999999999999999     
!  -7.0000000000000000       -5.0499999999999998        4.9000000000000004     
!  -5.0000000000000000        6.0300000000000002       -1.8999999999999999     
!   9.0000000000000000        8.9299999999999997        1.3999999999999999     
!   8.0999999999999996        12.000000000000000        1.8000000000000000     
!  -1.3000000000000000       -5.9240000000000004        5.9000000000000004     
! === sorted
!  -7.0000000000000000       -5.0499999999999998        4.9000000000000004     
!  -5.0000000000000000        6.0300000000000002       -1.8999999999999999     
!  -1.3000000000000000       -5.9240000000000004        5.9000000000000004     
!  -1.0000000000000000        5.0300000000000002        1.8999999999999999     
!   1.0000000000000000        2.9999999999999999E-002  0.90000000000000002     
!   1.8999999999999999       -2.9999999999999999E-002  0.40000000000000002     
!   8.0999999999999996        12.000000000000000        1.8000000000000000     
!   9.0000000000000000        8.9299999999999997        1.3999999999999999 

end program main

