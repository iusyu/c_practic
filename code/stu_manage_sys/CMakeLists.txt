cmake_minimum_required(VERSION 3.1)

project(studentInfoSys)

add_executable(ts_stu stu_info.c stu_info.h test_oblist.c file_IO.h file_IO.c obLinkedList.c obLinkedList.h )

set(CMAKE_BUILD_TYPE "Debug")
set(CMAKE_CXX_FLAGS_DEBUG "$ENV{CXXFLAGES} -o0 -Wall -g -ggdb")




