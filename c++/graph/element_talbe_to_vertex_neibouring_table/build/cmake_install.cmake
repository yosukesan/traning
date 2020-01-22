# Install script for directory: /home/yosuke/Data/github/traning/c++/graph/element_talbe_to_vertex_neibouring_table

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/yosuke/Data/github/traning/c++/graph/element_talbe_to_vertex_neibouring_table")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

if("${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}/home/yosuke/Data/github/traning/c++/graph/element_talbe_to_vertex_neibouring_table/graph" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/home/yosuke/Data/github/traning/c++/graph/element_talbe_to_vertex_neibouring_table/graph")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}/home/yosuke/Data/github/traning/c++/graph/element_talbe_to_vertex_neibouring_table/graph"
         RPATH "")
  endif()
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/home/yosuke/Data/github/traning/c++/graph/element_talbe_to_vertex_neibouring_table/graph")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/home/yosuke/Data/github/traning/c++/graph/element_talbe_to_vertex_neibouring_table" TYPE EXECUTABLE FILES "/home/yosuke/Data/github/traning/c++/graph/element_talbe_to_vertex_neibouring_table/build/graph")
  if(EXISTS "$ENV{DESTDIR}/home/yosuke/Data/github/traning/c++/graph/element_talbe_to_vertex_neibouring_table/graph" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}/home/yosuke/Data/github/traning/c++/graph/element_talbe_to_vertex_neibouring_table/graph")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}/home/yosuke/Data/github/traning/c++/graph/element_talbe_to_vertex_neibouring_table/graph")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/yosuke/Data/github/traning/c++/graph/element_talbe_to_vertex_neibouring_table/build/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
