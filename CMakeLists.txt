cmake_minimum_required(VERSION 3.8)
project(ReversiGame)

set(CMAKE_CXX_STANDARD 11)

add_subdirectory(lib/googletest-master)
include_directories(lib/googletest-master/googletest/include)
include_directories(lib/googletest-master/googlemock/include)

set(SOURCE_FILES
        AIPlayer.cpp
        AIPlayer.h
        Board.cpp
        Board.h
        ConsolePlayer.cpp
        ConsolePlayer.h
        Game.cpp
        Game.h
        Player.cpp
        Player.h
        Point.cpp
        Point.h
        RegularRules.cpp
        RegularRules.h
        Rules.cpp
        Rules.h GameMenu.cpp GameMenu.h)

set(TEST_FILES
        tests/main_test.cpp
        AIPlayer.cpp
        AIPlayer.h
        Board.cpp
        Board.h
        ConsolePlayer.cpp
        ConsolePlayer.h
        Game.cpp
        Game.h
        Player.cpp
        Player.h
        Point.cpp
        Point.h
        RegularRules.cpp
        RegularRules.h
        Rules.cpp
        Rules.h GameMenu.cpp GameMenu.h tests/BoardTest.cpp tests/AITest.cpp tests/GameTest.cpp)

add_executable(ReversiGame ${SOURCE_FILES} main.cpp)
add_executable(ReversiTest ${TEST_FILES} ${SOURCE_FILES})
target_link_libraries(ReversiTest gtest gtest_main)