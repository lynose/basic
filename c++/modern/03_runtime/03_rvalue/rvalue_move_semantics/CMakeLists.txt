cmake_minimum_required(VERSION 3.0)

project(rvalue_move_semantics LANGUAGES C)

add_executable(rvalue_move_semantics main.c)

install(TARGETS rvalue_move_semantics RUNTIME DESTINATION bin)
