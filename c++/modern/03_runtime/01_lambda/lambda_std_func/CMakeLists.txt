cmake_minimum_required(VERSION 3.0)

project(lampda_std_func)

add_executable(lampda_std_func main.cpp)

install(TARGETS lampda_std_func RUNTIME DESTINATION bin)
