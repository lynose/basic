cmake_minimum_required(VERSION 3.0)

project(rvalue_move_semantic)

add_executable(rvalue_move_semantic main.cpp)

install(TARGETS rvalue_move_semantic RUNTIME DESTINATION bin)
