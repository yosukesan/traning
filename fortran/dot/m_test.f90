
module m_test
   type test_real64_t
     integer :: id = 0
   contains
     procedure :: cmp_scalar => test_real64_cmp_scalar
     procedure :: cmp_vector => test_real64_cmp_vector
   end type test_real64_t
contains
   subroutine test_real64_cmp_scalar(this, test_name, s1, s2)
     use iso_fortran_env, only: real64
     implicit none
     class(test_real64_t) :: this
     character(*), intent(in) :: test_name
     real(real64), intent(in) :: s1, s2

     write(*,*) "id: ", this % id
     write(*,"(A)") "     -name: " // test_name
     if (s1 /= s2) then
       write(*,*) "Error: vector value unmatch", s1, s2
       stop (-1)
     end if
     write(*,*) "    -result: OK"

     this % id = this % id + 1

   end subroutine

   subroutine test_real64_cmp_vector(this, test_name, st, ed, v1, v2)
     use iso_fortran_env, only: real64
     implicit none
     class(test_real64_t) :: this
     character(*), intent(in) :: test_name
     real(real64), intent(in) :: v1(:), v2(:)
     integer, intent(in) :: st, ed
     integer :: i

     write(*,*) "id: ", this % id
     write(*,"(A)") "     -name: " // test_name

     if (size(v1) /= size(v2)) then
       write(*,*) "Error: vector size unmatched"
       stop (-1) 
     end if 

     do i=st,ed
       if (v1(i) /= v2(i)) then
         write(*,*) "Error: vector value unmatch at", i, "values", v1(i), v2(i)
         stop (-1) 
       end if
     end do

     write(*,*) "    -result: OK"

     this % id = this % id + 1

   end subroutine

end module m_test
