cmake_minimum_required(VERSION 3.0)

project(lambda_basic)

add_executable(lambda_basic main.cpp)

install(TARGETS lambda_basic RUNTIME DESTINATION bin)
