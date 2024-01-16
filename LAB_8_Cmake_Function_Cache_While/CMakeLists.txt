cmake_minimum_required(VERSION 3.26)
project(HELLOAPP VERSION 4.25)

set(SRC_FILES
    main.cpp
    src/calc.cpp
)

add_subdirectory(${CMAKE_SOURCE_DIR}/lib) #to run CMakeLists.txt  from /lib
add_executable(hellobinary ${SRC_FILES})
target_include_directories(hellobinary PUBLIC include/) # for calc.hpp
target_include_directories(hellobinary PUBLIC lib/) # for calc.hpp

target_link_libraries(hellobinary PUBLIC wifi_lib) # generated in dir build/lib/libwifi_lib.a
#configure_file 
set(PRODUCT_YEAR "2022")
#  OFF-0-FLASE-IGNORE 
if(DEBUG)
    set(AUTHOR "mahmoud korayem")
endif()
configure_file(defaultconfig.h.in defaultconfig.h)
target_include_directories(hellobinary PUBLIC ${PROJECT_BINARY_DIR}) #to enter the defaultconfig.h in the build process

if(TARGET wifi_lib)
message("wifi is available")
else()
message(FATAL_ERROR "wifi is not available")
endif()  


set (var 10)
while(var)
    message(${var})
    math(EXPR var "${var}-1")
endwhile()

function(happynewyear arg1)
    message("ARG1 ${arg1}") # name of variable
    message("ARG1 ${${arg1}}") # value of variable
    message("ARG1 ${ARGC}")    # number of arguments    
    message("ARG2 ${ARGN}")
    # message("ARG2 ${${ARGN}}")  # value of arg2 
    # message("ARG3")
endfunction()

set(var 2 0 2 4)
happynewyear(var jan)

option(CVar "Bool Var" True)
set(Var2 TRUE CACHE BOOL "bool variable")

message("CACHE Var2 IS ${Var2}")



