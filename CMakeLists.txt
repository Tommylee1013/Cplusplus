cmake_minimum_required(VERSION 3.26)
project(Cplusplus)

set(CMAKE_CXX_STANDARD 14)

add_executable(Cplusplus
        Chapter01/HelloWorlds.cpp)
add_executable(Chap01Compile Chapter01/test.cpp Chapter01/test.h
        Chapter01/HelloCompile.cpp)
add_executable(Chap02Prg2_1 Chapter02/prg02_01.cpp)
add_executable(Chap02Prg2_2 Chapter02/prg02_02.cpp)
add_executable(Chap02Prg2_3 Chapter02/prg02_03.cpp)
add_executable(Chap02Prg2_4 Chapter02/prg02_04.cpp)
add_executable(Chap02Prg2_5 Chapter02/prg02_05.cpp)
add_executable(Chap02Prg2_6 Chapter02/prg02_06.cpp)
add_executable(Chap02Prg2_7 Chapter02/prg02_07.cpp)
add_executable(Chap02Prg2_9 Chapter02/prg02_09.cpp)
add_executable(Chap02Prg2_11 Chapter02/prg02_11.cpp)
add_executable(Chap02Prg2_12 Chapter02/prg02_12.cpp)
add_executable(Chap02Prg2_13 Chapter02/prg02_13.cpp)
