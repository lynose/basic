cmake_minimum_required(VERSION 3.0)

project(strongly_typed_enum)

add_executable(strongly_typed_enum main.cpp)

install(TARGETS strongly_typed_enum RUNTIME DESTINATION bin)
