
cmake_minimum_required(VERSION 3.7)

project(test_unit)

include_directories(${CMAKE_INSTALL_PREFIX}/include)
add_executable(test_unit 0001_insert.c)
add_dependencies(test_unit binary_tree)
target_link_libraries(test_unit ${CMAKE_INSTALL_PREFIX}/lib/libbinary_tree.a)

#add_test(0001_insert)
