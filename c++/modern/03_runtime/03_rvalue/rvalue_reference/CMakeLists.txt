cmake_minimum_required(VERSION 3.0)

project(rvalue_reference)

add_executable(rvalue_reference main.cpp)

install(TARGETS rvalue_reference RUNTIME DESTINATION bin)
