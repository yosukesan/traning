
cmake_minimum_required(VERSION 3.7)

set (CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -W -Wall -pedantic")

project(linked_list)


add_library(linked_list linked_list.c)
