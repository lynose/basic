cmake_minimum_required(VERSION 3.0)

project(ifswitch)

add_executable(ifswitch main.cpp)

install(TARGETS ifswitch RUNTIME DESTINATION bin)
