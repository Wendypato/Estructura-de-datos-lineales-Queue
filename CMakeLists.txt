cmake_minimum_required(VERSION 3.28)
project(Queue)

set(CMAKE_CXX_STANDARD 17)

add_executable(Queue main.cpp
        cmake-build-debug/Queue.cpp
        cmake-build-debug/Queue.h)
