cmake_minimum_required(VERSION 3.14)
project(test)

include(FetchContent)
FetchContent_Declare(
    googletest
    GIT_REPOSITORY  https://github.com/google/googletest.git 
    GIT_TAG         ${MYAPP_GTEST_TAG}
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(ExampleTest CommandTest.cpp)
target_link_libraries(ExampleTest
    GTest::gtest_main
    command
)

include(GoogleTest)
gtest_discover_tests(ExampleTest)
