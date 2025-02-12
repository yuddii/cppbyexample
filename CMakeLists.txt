cmake_minimum_required(VERSION 3.29.0)
project(cppbyexample
    VERSION 0.0.1
    DESCRIPTION "C++ by Example"
    HOMEPAGE_URL "https://github.com/yuddii/cppbyexample"
    LANGUAGES CXX
    )

SET(CMAKE_CXX_STANDARD 17)

# 变量和目录设置
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)
set(Account_Dir ${CMAKE_SOURCE_DIR}/src/account)
set(Animal_Dir ${CMAKE_SOURCE_DIR}/src/animal)
set(Base_Dir ${CMAKE_SOURCE_DIR}/src/base)
set(Thread_Dir ${CMAKE_SOURCE_DIR}/src/thread)

# 添加子目录
add_subdirectory(src)





