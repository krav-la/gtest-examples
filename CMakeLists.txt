cmake_minimum_required(VERSION 3.10)
project(my_application)

set(MYAPP_BINARY_NAME example CACHE STRING "Name of an output executable")
set(MYAPP_BUILD_BINARY TRUE CACHE BOOL "Should be the binary compiled?")
set(MYAPP_GTEST_TAG v1.13.0 CACHE STRING "Latest googletest stable version")
set(CMAKE_CXX_STANDARD 14)

add_subdirectory(Command)
add_subdirectory(SmartHome)

if(MYAPP_BUILD_BINARY)
    add_subdirectory(src)
endif()
add_subdirectory(test)
