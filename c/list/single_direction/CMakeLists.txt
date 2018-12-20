
cmake_minimum_required(VERSION 3.7)

project (main)

add_library(linked_list linked_list.c)

add_executable(main main.c)
target_link_libraries(main linked_list)

install(TARGETS main DESTINATION bin)
