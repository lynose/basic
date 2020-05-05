cmake_minimum_required(VERSION 3.0)

project(if_constexpr)

add_executable(if_constexpr main.cpp)

install(TARGETS if_constexpr RUNTIME DESTINATION bin)
