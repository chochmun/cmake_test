cmake_minimum_required(VERSION 3.5)

project(CMakeLearn)

add_library(add_function STATIC add_function.cpp)

target_include_directories(add_function PUBLIC ${CMAKE_SOURCE_DIR}/include)
#target_compile_options(add_function PRIVATE -wall -werror)
