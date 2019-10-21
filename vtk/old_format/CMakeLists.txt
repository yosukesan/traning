cmake_minimum_required(VERSION 3.11)

project(vtkreader)
add_library(vtkreader vtk_base.cpp vtk_reader.cpp)

project(vtk)
add_executable(vtk main.cpp)
target_link_libraries(vtk vtkreader)
