cmake_minimum_required(VERSION 3.7 FATAL_ERROR)

project (a.out)

add_executable(a.out main.cpp)

install (TARGETS a.out DESTINATION ${CMAKE_INSTALL_PREFIX})
