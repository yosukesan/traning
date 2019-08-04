cmake_minimum_required(VERSION 3.1)

project(graph)

add_executable(graph main.cpp)

install (TARGETS graph DESTINATION ${CMAKE_INSTALL_PREFIX})
