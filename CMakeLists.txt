cmake_minimum_required(VERSION 3.8)
project(ReversiGame)

set(CMAKE_CXX_STANDARD 98)

add_subdirectory(lib/googletest-master)
include_directories(lib/googletest-master/googletest/include)
include_directories(lib/googletest-master/googlemock/include)
include_directories(includes/)
set(SOURCE_FILES
        src/AIPlayer.cpp
        includes/AIPlayer.h
        src/Board.cpp
        includes/Board.h
        src/ConsolePlayer.cpp
        includes/ConsolePlayer.h
        src/Game.cpp
        includes/Game.h
        src/Player.cpp
        src/Sign.cpp
        includes/Sign.h
        includes/Player.h
        src/Point.cpp
        includes/Point.h
        src/RegularRules.cpp
        includes/RegularRules.h
        src/Rules.cpp
        includes/Rules.h src/GameMenu.cpp includes/GameMenu.h)

set(TEST_FILES
        tests/main_test.cpp
        src/AIPlayer.cpp
        includes/AIPlayer.h
        src/Board.cpp
        includes/Board.h
        src/ConsolePlayer.cpp
        includes/ConsolePlayer.h
        src/Game.cpp
        includes/Game.h
        src/Player.cpp
        src/Sign.cpp
        includes/Sign.h
        includes/Player.h
        src/Point.cpp
        includes/Point.h
        src/RegularRules.cpp
        includes/RegularRules.h
        src/Rules.cpp
        includes/Rules.h src/GameMenu.cpp includes/GameMenu.h tests/BoardTest.cpp tests/AITest.cpp tests/GameTest.cpp tests/RulesTest.cpp)

add_executable(ReversiGame ${SOURCE_FILES} main.cpp)
add_executable(ReversiTest ${TEST_FILES} ${SOURCE_FILES})
target_link_libraries(ReversiTest gtest gtest_main)