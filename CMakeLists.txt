cmake_minimum_required(VERSION 3.21)
project(exchange)



set(CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/cmake/modules)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_C_FLAGS "-lgmp")

find_package(GMP REQUIRED)

include_directories(code)
add_subdirectory(code)



set(GOOGLETEST_VERSION 1.11.0)

add_subdirectory(tests)
