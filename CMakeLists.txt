cmake_minimum_required(VERSION 3.5)

project(CMakeLearn)

add_subdirectory(lib)
add_executable(cmake_test main.cpp)
target_link_libraries(cmake_test add_function)