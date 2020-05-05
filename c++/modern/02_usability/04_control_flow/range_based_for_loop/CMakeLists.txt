cmake_minimum_required(VERSION 3.0)

project(range_based_for_loop)

add_executable(range_based_for_loop main.cpp)

install(TARGETS range_based_for_loop RUNTIME DESTINATION bin)
