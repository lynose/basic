cmake_minimum_required(VERSION 3.0)

project(lambda_func_obj_wrapper)

add_executable(lambda_func_obj_wrapper main.cpp)

install(TARGETS lambda_func_obj_wrapper RUNTIME DESTINATION bin)
