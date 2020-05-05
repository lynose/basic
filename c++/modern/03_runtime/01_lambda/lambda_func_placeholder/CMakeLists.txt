cmake_minimum_required(VERSION 3.0)

project(lambda_func_placeholder)

add_executable(lambda_func_placeholder main.cpp)

install(TARGETS lambda_func_placeholder RUNTIME DESTINATION bin)
