cmake_minimum_required(VERSION 3.22)
project(new)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -g")

add_executable(new main.cpp Matrix.cpp Matrix.h)
