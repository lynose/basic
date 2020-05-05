cmake_minimum_required(VERSION 3.0)

project(initializerlist)

add_executable(initializerlist main.cpp)

install(TARGETS initializerlist RUNTIME DESTINATION bin)
