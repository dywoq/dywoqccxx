cmake_minimum_required(VERSION 3.31)
project(dywoqruntime)

file(GLOB SOURCES src/dywoq/runtime/*.c)
set(CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS} 
    -nostdlib 
    -nodefaultlibs 
    -fno-rtti 
    -fno-exceptions
)

add_library(${PROJECT_NAME} STATIC ${SOURCES})
target_include_directories(${PROJECT_NAME} include/)
