
program main
  use iso_fortran_env, only: real64
  use m_algorithm, only: algorithm_real64_t
  use m_test
  implicit none
  integer, parameter :: n = 8
  integer :: i
  type(algorithm_real64_t) :: alg
  type(test_real64_t) :: test
  real(real64) :: arr(1:n) 

  !call random_seed()
  !do i=1,n 
  !  call random_number(arr(i))
  !  if (arr(i) < 0.5d0) then
  !    arr(i) = arr(i) * i
  !  else
  !    arr(i) = -arr(i)
  !  end if
  !end do
  do i=1,n 
    arr(i) = i - 3
  end do

  !do i=1,n 
  !  print*, arr(i)
  !end do

  call alg%sort(1, n, arr)

  call test%cmp_scalar("reduction", alg%reduce(1, n, arr), sum(arr))
  call test%cmp_scalar("dot", alg%dot(1, n, arr, arr), dot_product(arr, arr))

end program main
