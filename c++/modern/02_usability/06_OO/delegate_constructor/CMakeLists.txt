cmake_minimum_required(VERSION 3.0)

project(delegate_constructor)

add_executable(delegate_constructor main.cpp)

install(TARGETS delegate_constructor RUNTIME DESTINATION bin)
