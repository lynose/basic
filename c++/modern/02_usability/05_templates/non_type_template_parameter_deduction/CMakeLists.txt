cmake_minimum_required(VERSION 3.0)

project(non_type_template_parameter_deduction)

add_executable(non_type_template_parameter_deduction main.cpp)

install(TARGETS non_type_template_parameter_deduction RUNTIME DESTINATION bin)
