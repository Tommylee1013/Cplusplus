cmake_minimum_required(VERSION 3.26)
project(Cplusplus)

set(CMAKE_CXX_STANDARD 14)

add_executable(Cplusplus
        Chapter01/HelloWorlds.cpp)
add_executable(Chap01Compile Chapter01/test.cpp Chapter01/test.h
        Chapter01/HelloCompile.cpp)
