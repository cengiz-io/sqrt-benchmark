CMAKE_MINIMUM_REQUIRED(VERSION 3.9)
PROJECT(sqrt_benchmark)

ADD_EXECUTABLE(sqrt_benchmark main.c macros.h fast_sqrt.h)
SET_PROPERTY(TARGET sqrt_benchmark PROPERTY C_STANDARD 99)

IF (NOT WIN32)
	TARGET_LINK_LIBRARIES(sqrt_benchmark m)
ENDIF()