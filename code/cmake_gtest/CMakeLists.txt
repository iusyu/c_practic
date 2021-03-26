cmake_minimum_required(VERSION 3.8)

set(This cmake_gtest)

project(${This} C CXX)
set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 11)

include(FetchContent)
FetchContent_Declare(
	googletest
	URL https://github.com/google/googletest/archive/609281088cfefc76f9d0ce82e1ff6c30cc3591e5.zip
	)


enable_testing()

add_executable(hello_test hello_test.cc)
target_link_libraries(hello_test gtest_main)
include(GoogleTest)
gtest_discover_tests(hello_test)

