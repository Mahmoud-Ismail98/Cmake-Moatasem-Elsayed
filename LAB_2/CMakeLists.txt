 cmake_minimum_required(VERSION 3.26)
 project(HELLOAPP)
 add_executable(hellobinary main.cpp src/calc.cpp)
 target_include_directories(hellobinary PUBLIC  include/)