cmake_minimum_required(VERSION 3.10)
project(SMART_HOME_LIB)

set(SOURCES SmartHome.cpp)
set(SMART_HOME_LIB smart_home)

add_library(${SMART_HOME_LIB} ${SOURCES})
target_include_directories(${SMART_HOME_LIB} INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
set_target_properties(${SMART_HOME_LIB} PROPERTIES
    ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
)