cmake_minimum_required(VERSION 3.29.0)
project(cppbyexample)
set(CMAKE_CXX_STANDARD 17)

# 动态库存放位置
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin) 

aux_source_directory(${PROJECT_SOURCE_DIR}/src SRC_LISTS)
add_library(
    common 
    SHARED 
    ${SRC_LISTS}
)

target_include_directories(common PUBLIC ${PROJECT_SOURCE_DIR}/include)

add_executable(cppbyexample main.cpp)

target_include_directories(cppbyexample PUBLIC ${PROJECT_SOURCE_DIR}/include)

target_link_libraries(cppbyexample PUBLIC common)




