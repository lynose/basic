cmake_minimum_required(VERSION 3.0)

project(friendclass)

add_executable(friendclass main.cpp)

install(TARGETS friendclass RUNTIME DESTINATION bin)
