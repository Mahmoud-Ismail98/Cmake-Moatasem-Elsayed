 cmake_minimum_required(VERSION 3.26)
 project(HELLOAPP VERSION 4.25)
 set(SRC_FILES  
    main.cpp 
    src/calc.cpp)
 # or set(SRC_FILES "main.cpp;src/calc.cpp")
  message(STATUS "SRS_FILES has ${SRC_FILES}") 

 add_subdirectory(${CMAKE_SOURCE_DIR}/lib)
 message("path of source is ${CMAKE_SOURCE_DIR}")  
 add_executable(hellobinary ${SRC_FILES})
 target_include_directories(hellobinary PUBLIC  include/ lib/)
 target_link_libraries(hellobinary PUBLIC wifi_lib)

#configure_file 
set(PRODUCT_YEAR "2022")
#  OFF-0-FLASE-IGNORE 
if(DEBUG)
    set(AUTHOR "mahmoud korayem")
endif()

configure_file(defaultconfig.h.in defaultconfig.h)
target_include_directories(hellobinary PUBLIC ${PROJECT_BINARY_DIR})

if(TARGET wifi_lib)
message("wifi is available")
else()
message(FATAL_ERROR "wifi is not available")
endif()   

foreach(F IN ITEMS L A B 7)
    message(STATUS ${F})
endforeach()
message(" ")

set(developer C M A K E)
foreach(G IN LISTS developer)
    message(STATUS " ==> ${G}")
endforeach()

#if(NOT DEBUG)
#if(Var AND Var2)
#if(Var OR Var2)
#if(myval MATCHES regularexpression)
#if(EXISTS file)
#if(Var LESS Var2)
#if(Var GREATER Var2)
#if(Var EQUAL Var2)
#if(TARGET wifi_lib) -->add_executable ,  add_libraries ,add_custom ---all is atarget

