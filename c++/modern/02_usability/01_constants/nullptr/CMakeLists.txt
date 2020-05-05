cmake_minimum_required(VERSION 3.0)

project(nullptr)

add_executable(nullptr main.cpp)

install(TARGETS nullptr RUNTIME DESTINATION bin)
