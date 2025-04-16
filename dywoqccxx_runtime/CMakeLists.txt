cmake_minimum_required(VERSION 4.0.0)
project(dywoqccxx_runtime)

file(GLOB SOURCES src/dywoq/runtime/*.c)
set(CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS} 
    -nostdlib 
    -nodefaultlibs 
    -fno-rtti 
    -fno-exceptions
)

add_library(${PROJECT_NAME} STATIC ${SOURCES})
target_include_directories(${PROJECT_NAME} PUBLIC  include/)
