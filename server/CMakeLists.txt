cmake_minimum_required(VERSION 3.8)
project(ReversiGame)

set(CMAKE_CXX_STANDARD 98)

set(SOURCE_FILES
        main.cpp
        Server.cpp
        Server.h
        Command.h
        StartCommand.cpp
        StartCommand.h
        GamesListCommand.cpp
        GamesListCommand.h
        JoinCommand.cpp
        JoinCommand.h
        CloseCommand.cpp
        CloseCommand.h
        GameInfo.cpp
        GameInfo.h
        Command.cpp
        CommandManager.cpp
        CommandManager.h
        ClientManager.cpp
        ClientManager.h
        GamesList.cpp
        GamesList.h)

add_executable(server ${SOURCE_FILES})