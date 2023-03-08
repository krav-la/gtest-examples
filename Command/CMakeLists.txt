cmake_minimum_required(VERSION 3.10)
project(command_lib)

set(SOURCES Command.cpp)
set(COMMAND_LIB command)

add_library(${COMMAND_LIB} ${SOURCES})
target_include_directories(${COMMAND_LIB} INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
set_target_properties(${COMMAND_LIB} PROPERTIES
    ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
)