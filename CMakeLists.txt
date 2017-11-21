cmake_minimum_required(VERSION 3.8)
project(ReversiGame)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        Board.cpp
        Board.h
        ConsolePlayer.cpp
        ConsolePlayer.h
        main.cpp
        Play.cpp
        Play.h
        Player.cpp
        Player.h
        Point.cpp
        Point.h AIPlayer.cpp AIPlayer.h)

add_executable(ReversiGame ${SOURCE_FILES})