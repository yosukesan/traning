
cmake_minimum_required(VERSION 3.7)

project(binary_tree)

#--- Build ----------------------------------------------------------------
# build library
add_library(binary_tree binary_tree.c)

# post compile installation
# This need to be ordered.
install (FILES binary_tree.h DESTINATION ${CMAKE_INSTALL_PREFIX}/include)
install (TARGETS binary_tree DESTINATION ${CMAKE_INSTALL_PREFIX}/lib)
