cmake_minimum_required(VERSION 3.20.0)

project(cppbyexample)

set(CMAKE_CXX_STANDARD 11)

include_directories(${CMAKE_SOURCE_DIR}/include)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/bin)

aux_source_directory(${CMAKE_SOURCE_DIR}/src SRC_LIST)

add_executable(cppbyexample ${SRC_LIST})

