cmake_minimum_required(VERSION 3.14)
project(BTree LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)

add_executable(BTree src/main.cpp tests/tests.cpp)