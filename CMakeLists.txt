# 指定运行此项目所需的最低CMake版本
cmake_minimum_required(VERSION 3.10)

# 项目名称
project(cppbyexample)

# 设置c++版本
set(CMAKE_CXX_STANDARD 17)

# 其他CMake代码
add_executable(cppbyexample src/simple/main.cpp src/simple/event_thread.cpp src/simple/task.cpp)

set(CMAKE_BUILD_TYPE "Debug")
