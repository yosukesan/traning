
function func() result(return_value)
  implicit none
  integer :: return_value
  return_value = 0
end function

program main
  implicit none
  integer :: func

  write(*,*) func()

end program main
