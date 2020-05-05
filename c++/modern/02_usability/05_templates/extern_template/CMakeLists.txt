cmake_minimum_required(VERSION 3.0)

project(extern_template)

add_executable(extern_template main.cpp)

install(TARGETS extern_template RUNTIME DESTINATION bin)
