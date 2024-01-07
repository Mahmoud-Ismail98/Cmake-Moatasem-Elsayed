 cmake_minimum_required(VERSION 3.26)
 project(HELLOAPP VERSION 4.25)
 set(SRC_FILES  
    main.cpp 
    src/calc.cpp)
 # or set(SRC_FILES "main.cpp;src/calc.cpp")
  message(STATUS "SRS_FILES has ${SRC_FILES}") 
#  if(EXISTS  ${CMAKE_SOURCE_DIR}/main.cpp)
#     message("file main.cpp is exist")

#  else()
#     message(FATAL_ERROR "file not eixts")
#  endif()
 add_subdirectory(${CMAKE_SOURCE_DIR}/lib)
 message("path of source is ${CMAKE_SOURCE_DIR}")  
 add_executable(hellobinary ${SRC_FILES})
 target_include_directories(hellobinary PUBLIC  include/ lib/)
 target_link_libraries(hellobinary PUBLIC wifi_lib)
#configure_file 
set(PRODUCT_YEAR "2022")
configure_file(defaultconfig.h.in defaultconfig.h)
target_include_directories(hellobinary PUBLIC ${PROJECT_BINARY_DIR})