cmake_minimum_required(VERSION 3.0)

project(variadic_template)

add_executable(variadic_template main.cpp)

install(TARGETS variadic_template RUNTIME DESTINATION bin)
