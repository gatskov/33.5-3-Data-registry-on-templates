cmake_minimum_required (VERSION 3.24)


set(MY_INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)

add_executable (DataRegistrTemplites  "main.cpp " " ${MY_INCLUDE_DIR}/registry.h" " ${MY_INCLUDE_DIR}/data.h" )
target_include_directories(DataRegistrTemplites  PUBLIC ${MY_INCLUDE_DIR})
