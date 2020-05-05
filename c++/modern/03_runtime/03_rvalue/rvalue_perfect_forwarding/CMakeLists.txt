cmake_minimum_required(VERSION 3.0)

project(rvalue_perfect_forwarding)

add_executable(rvalue_perfect_forwarding main.cpp)

install(TARGETS rvalue_perfect_forwarding RUNTIME DESTINATION bin)
