cmake_minimum_required(VERSION 3.14)
project(gtest)

set(CMAKE_CXX_STANDARD 11)

enable_testing()
find_package(GTest REQUIRED)
#include(${GTEST_INCLUDE_DIR})
add_executable(gt001 gt001.cpp)
target_link_libraries(gt001 ${GTEST_INCLUDE_DIR} ${GTEST_MAIN_LIBRARY_DEBUG})

add_test(
	test gt001
	test gt001
	)


