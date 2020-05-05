cmake_minimum_required(VERSION 3.0)

project(decltype)

add_executable(decltype main.cpp)

install(TARGETS decltype RUNTIME DESTINATION bin)
