cmake_minimum_required(VERSION 3.0)

project(OrderByWeight)

add_executable(OrderByWeight main.cpp)

install(TARGETS OrderByWeight RUNTIME DESTINATION bin)
