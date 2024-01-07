cmake_minimum_required(VERSION 3.26)
message("hello from lib")

message (STATUS "CMAKE source dir ${CMAKE_SOURCE_DIR}")
message (STATUS  "CMAKE current SOURCE DIR ${CMAKE_CURRENT_SOURCE_DIR}")
message(STATUS "CMAKE BINARY dir "${CMAKE_BINARY_DIR})
message(STATUS "CMAKE CURRENT BINARY dir" ${CMAKE_CURRENT_BINARY_DIR})
message(STATUS "CMAKE Generator "${CMAKE_GENERATOR})
#ENVIRONMENT variable
set(var  $ENV{PATH})
message(STATUS "PATH $ENV{PATH}")
message(STATUS "argument vale ${my_value}")

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED true)

message(STATUS  "CMAKE_CXX_STANDARD   "${CMAKE_CXX_STANDARD})
message(STATUS  "CMAKE_CXX_STANDARD_REQUIRED    "${CMAKE_CXX_STANDARD_REQUIRED})
add_library(wifi_lib
            Wifi.cpp
            Wifi.hpp )




