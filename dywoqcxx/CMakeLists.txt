cmake_minimum_required(VERSION 4.0.0)
project(dywoqcxx)

file(GLOB SOURCES src/dywoq/cxx/*.cxx)
set(CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS} -nostdlib -nodefaultlibs)

add_library(${PROJECT_NAME} STATIC ${SOURCES})
target_include_directories(${PROJECT_NAME} PUBLIC  include/)
