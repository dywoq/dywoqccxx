cmake_minimum_required(VERSION 3.31)
project(dywoqtest)

file(GLOB SOURCES src/dywoq/*.c)
set(CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS})

add_library(${PROJECT_NAME} STATIC ${SOURCES})
target_include_directories(${PROJECT_NAME} include/)
z