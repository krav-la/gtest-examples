cmake_minimum_required(VERSION 3.10)
project(app_bin)

file(GLOB SOURCES *.cpp)
add_executable(${MYAPP_BINARY_NAME} ${SOURCES})
target_link_libraries(${MYAPP_BINARY_NAME} command smart_home)
