cmake_minimum_required(VERSION 3.9)
project(sqrt_benchmark)

add_executable(sqrt_benchmark main.c macros.h fast_sqrt.h)

target_link_libraries(sqrt_benchmark m)