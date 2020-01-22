
!< @author いのししの人
!! @date 2019/12/23

module linked_list_int64
  use iso_fortran_env, only: int64
  implicit none

  type linked_list_int64_t
    integer(int64)            :: val_
    type(linked_list_int64_t),pointer :: next_
    type(linked_list_int64_t),pointer :: cur_
    type(linked_list_int64_t),pointer :: end_
    type(linked_list_int64_t),pointer :: begin_
  !contains
  !  procedure :: push_back=>linked_list_int64_push_back
  end type linked_list_int64_t

contains

  subroutine linked_list_int64_push_back(this, list, val)
    implicit none
    class(linked_list_int64_t)         :: this
    type(linked_list_int64_t),pointer  :: list, tmp
    integer, intent(in)                :: val

    if (.not. allocated(list)) then
      allocate(list)
      return
    end if

    tmp = list

    do while (allocated(tmp))
      tmp = tmp%next_ 
    end do

    allocate(tmp)

  end subroutine

end module linked_list_int64

module graph_data_int64
  implicit none
  type graph_data_int64_t
  end type graph_data_int64_t
end module graph_data_int64

module graph_operation_int64
  implicit none
  type graph_operation_int64_t
  end type graph_operation_int64_t
end module graph_operation_int64

module graph
  use graph_data_int64
  use graph_operation_int64
  implicit none
  
end module graph
