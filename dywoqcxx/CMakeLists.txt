cmake_minimum_required(VERSION 3.31)
project(dywoqcxx)

file(GLOB SOURCES src/dywoqcxx/*.cxx)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -ffreestanding")

add_library(${PROJECT_NAME} STATIC ${SOURCES})
target_include_directories(${PROJECT_NAME} include/)
