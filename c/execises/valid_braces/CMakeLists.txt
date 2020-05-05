cmake_minimum_required(VERSION 3.0)

project(valid_braces LANGUAGES C)

add_executable(valid_braces main.c)

install(TARGETS valid_braces RUNTIME DESTINATION bin)
