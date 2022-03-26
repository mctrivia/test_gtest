cmake_minimum_required(VERSION 3.21)
project(test)

set(CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/cmake/modules)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_C_FLAGS "-lgmp")

find_package(GMP REQUIRED)
add_executable(test main.cpp TestClass.cpp TestClass.h)
target_link_libraries(test gmp gmpxx)

set(HEADER_FILES
        TestClass.h
        )

set(SOURCE_FILES
        TestClass.cpp
        )

add_library(test_lib STATIC ${SOURCE_FILES} ${HEADER_FILES})