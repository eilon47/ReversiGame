cmake_minimum_required(VERSION 3.8)
project(ReversiGame)

set(CMAKE_CXX_STANDARD 98)

set(SOURCE_FILES
        main.cpp
        Server.cpp
        Server.h)

add_executable(server ${SOURCE_FILES})