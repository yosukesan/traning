
program main
  use linked_list_int64

  type(linked_list_int64) :: list_op
  type(linked_list_int64),pointer :: list_data
  call list_op%push_back(list_data)

end program main
