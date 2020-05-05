cmake_minimum_required(VERSION 3.0)

project(constexpr)

add_executable(constexpr main.cpp)

install(TARGETS constexpr RUNTIME DESTINATION bin)
