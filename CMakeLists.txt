cmake_minimum_required(VERSION 3.9)
project(sqrt_benchmark)

set(CMAKE_C_FLAGS "-std=c99")

add_executable(sqrt_benchmark main.c macros.h fast_sqrt.h)
if (!WIN)
	target_link_libraries(sqrt_benchmark m)
endif()