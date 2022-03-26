cmake_minimum_required(VERSION 3.21)
project(Google_tests)
add_subdirectory(lib)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

set(CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/cmake/modules)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_C_FLAGS "-lgmp")

find_package(GMP REQUIRED)
add_executable(Google_Tests_run TestClassTests.cpp)
target_link_libraries(Google_Tests_run gmp gmpxx)
target_link_libraries(Google_Tests_run test_lib)
target_link_libraries(Google_Tests_run gtest gtest_main)
