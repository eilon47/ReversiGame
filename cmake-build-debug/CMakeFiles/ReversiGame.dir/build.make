# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/dandan/Downloads/clion-2017.2.3/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/dandan/Downloads/clion-2017.2.3/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/dandan/Desktop/git/ReversiGame

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/dandan/Desktop/git/ReversiGame/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ReversiGame.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ReversiGame.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ReversiGame.dir/flags.make

CMakeFiles/ReversiGame.dir/AIPlayer.cpp.o: CMakeFiles/ReversiGame.dir/flags.make
CMakeFiles/ReversiGame.dir/AIPlayer.cpp.o: ../AIPlayer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dandan/Desktop/git/ReversiGame/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ReversiGame.dir/AIPlayer.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ReversiGame.dir/AIPlayer.cpp.o -c /home/dandan/Desktop/git/ReversiGame/AIPlayer.cpp

CMakeFiles/ReversiGame.dir/AIPlayer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ReversiGame.dir/AIPlayer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dandan/Desktop/git/ReversiGame/AIPlayer.cpp > CMakeFiles/ReversiGame.dir/AIPlayer.cpp.i

CMakeFiles/ReversiGame.dir/AIPlayer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ReversiGame.dir/AIPlayer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dandan/Desktop/git/ReversiGame/AIPlayer.cpp -o CMakeFiles/ReversiGame.dir/AIPlayer.cpp.s

CMakeFiles/ReversiGame.dir/AIPlayer.cpp.o.requires:

.PHONY : CMakeFiles/ReversiGame.dir/AIPlayer.cpp.o.requires

CMakeFiles/ReversiGame.dir/AIPlayer.cpp.o.provides: CMakeFiles/ReversiGame.dir/AIPlayer.cpp.o.requires
	$(MAKE) -f CMakeFiles/ReversiGame.dir/build.make CMakeFiles/ReversiGame.dir/AIPlayer.cpp.o.provides.build
.PHONY : CMakeFiles/ReversiGame.dir/AIPlayer.cpp.o.provides

CMakeFiles/ReversiGame.dir/AIPlayer.cpp.o.provides.build: CMakeFiles/ReversiGame.dir/AIPlayer.cpp.o


CMakeFiles/ReversiGame.dir/Board.cpp.o: CMakeFiles/ReversiGame.dir/flags.make
CMakeFiles/ReversiGame.dir/Board.cpp.o: ../Board.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dandan/Desktop/git/ReversiGame/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/ReversiGame.dir/Board.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ReversiGame.dir/Board.cpp.o -c /home/dandan/Desktop/git/ReversiGame/Board.cpp

CMakeFiles/ReversiGame.dir/Board.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ReversiGame.dir/Board.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dandan/Desktop/git/ReversiGame/Board.cpp > CMakeFiles/ReversiGame.dir/Board.cpp.i

CMakeFiles/ReversiGame.dir/Board.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ReversiGame.dir/Board.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dandan/Desktop/git/ReversiGame/Board.cpp -o CMakeFiles/ReversiGame.dir/Board.cpp.s

CMakeFiles/ReversiGame.dir/Board.cpp.o.requires:

.PHONY : CMakeFiles/ReversiGame.dir/Board.cpp.o.requires

CMakeFiles/ReversiGame.dir/Board.cpp.o.provides: CMakeFiles/ReversiGame.dir/Board.cpp.o.requires
	$(MAKE) -f CMakeFiles/ReversiGame.dir/build.make CMakeFiles/ReversiGame.dir/Board.cpp.o.provides.build
.PHONY : CMakeFiles/ReversiGame.dir/Board.cpp.o.provides

CMakeFiles/ReversiGame.dir/Board.cpp.o.provides.build: CMakeFiles/ReversiGame.dir/Board.cpp.o


CMakeFiles/ReversiGame.dir/ConsolePlayer.cpp.o: CMakeFiles/ReversiGame.dir/flags.make
CMakeFiles/ReversiGame.dir/ConsolePlayer.cpp.o: ../ConsolePlayer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dandan/Desktop/git/ReversiGame/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/ReversiGame.dir/ConsolePlayer.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ReversiGame.dir/ConsolePlayer.cpp.o -c /home/dandan/Desktop/git/ReversiGame/ConsolePlayer.cpp

CMakeFiles/ReversiGame.dir/ConsolePlayer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ReversiGame.dir/ConsolePlayer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dandan/Desktop/git/ReversiGame/ConsolePlayer.cpp > CMakeFiles/ReversiGame.dir/ConsolePlayer.cpp.i

CMakeFiles/ReversiGame.dir/ConsolePlayer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ReversiGame.dir/ConsolePlayer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dandan/Desktop/git/ReversiGame/ConsolePlayer.cpp -o CMakeFiles/ReversiGame.dir/ConsolePlayer.cpp.s

CMakeFiles/ReversiGame.dir/ConsolePlayer.cpp.o.requires:

.PHONY : CMakeFiles/ReversiGame.dir/ConsolePlayer.cpp.o.requires

CMakeFiles/ReversiGame.dir/ConsolePlayer.cpp.o.provides: CMakeFiles/ReversiGame.dir/ConsolePlayer.cpp.o.requires
	$(MAKE) -f CMakeFiles/ReversiGame.dir/build.make CMakeFiles/ReversiGame.dir/ConsolePlayer.cpp.o.provides.build
.PHONY : CMakeFiles/ReversiGame.dir/ConsolePlayer.cpp.o.provides

CMakeFiles/ReversiGame.dir/ConsolePlayer.cpp.o.provides.build: CMakeFiles/ReversiGame.dir/ConsolePlayer.cpp.o


CMakeFiles/ReversiGame.dir/Game.cpp.o: CMakeFiles/ReversiGame.dir/flags.make
CMakeFiles/ReversiGame.dir/Game.cpp.o: ../Game.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dandan/Desktop/git/ReversiGame/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/ReversiGame.dir/Game.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ReversiGame.dir/Game.cpp.o -c /home/dandan/Desktop/git/ReversiGame/Game.cpp

CMakeFiles/ReversiGame.dir/Game.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ReversiGame.dir/Game.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dandan/Desktop/git/ReversiGame/Game.cpp > CMakeFiles/ReversiGame.dir/Game.cpp.i

CMakeFiles/ReversiGame.dir/Game.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ReversiGame.dir/Game.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dandan/Desktop/git/ReversiGame/Game.cpp -o CMakeFiles/ReversiGame.dir/Game.cpp.s

CMakeFiles/ReversiGame.dir/Game.cpp.o.requires:

.PHONY : CMakeFiles/ReversiGame.dir/Game.cpp.o.requires

CMakeFiles/ReversiGame.dir/Game.cpp.o.provides: CMakeFiles/ReversiGame.dir/Game.cpp.o.requires
	$(MAKE) -f CMakeFiles/ReversiGame.dir/build.make CMakeFiles/ReversiGame.dir/Game.cpp.o.provides.build
.PHONY : CMakeFiles/ReversiGame.dir/Game.cpp.o.provides

CMakeFiles/ReversiGame.dir/Game.cpp.o.provides.build: CMakeFiles/ReversiGame.dir/Game.cpp.o


CMakeFiles/ReversiGame.dir/Player.cpp.o: CMakeFiles/ReversiGame.dir/flags.make
CMakeFiles/ReversiGame.dir/Player.cpp.o: ../Player.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dandan/Desktop/git/ReversiGame/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/ReversiGame.dir/Player.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ReversiGame.dir/Player.cpp.o -c /home/dandan/Desktop/git/ReversiGame/Player.cpp

CMakeFiles/ReversiGame.dir/Player.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ReversiGame.dir/Player.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dandan/Desktop/git/ReversiGame/Player.cpp > CMakeFiles/ReversiGame.dir/Player.cpp.i

CMakeFiles/ReversiGame.dir/Player.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ReversiGame.dir/Player.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dandan/Desktop/git/ReversiGame/Player.cpp -o CMakeFiles/ReversiGame.dir/Player.cpp.s

CMakeFiles/ReversiGame.dir/Player.cpp.o.requires:

.PHONY : CMakeFiles/ReversiGame.dir/Player.cpp.o.requires

CMakeFiles/ReversiGame.dir/Player.cpp.o.provides: CMakeFiles/ReversiGame.dir/Player.cpp.o.requires
	$(MAKE) -f CMakeFiles/ReversiGame.dir/build.make CMakeFiles/ReversiGame.dir/Player.cpp.o.provides.build
.PHONY : CMakeFiles/ReversiGame.dir/Player.cpp.o.provides

CMakeFiles/ReversiGame.dir/Player.cpp.o.provides.build: CMakeFiles/ReversiGame.dir/Player.cpp.o


CMakeFiles/ReversiGame.dir/Point.cpp.o: CMakeFiles/ReversiGame.dir/flags.make
CMakeFiles/ReversiGame.dir/Point.cpp.o: ../Point.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dandan/Desktop/git/ReversiGame/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/ReversiGame.dir/Point.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ReversiGame.dir/Point.cpp.o -c /home/dandan/Desktop/git/ReversiGame/Point.cpp

CMakeFiles/ReversiGame.dir/Point.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ReversiGame.dir/Point.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dandan/Desktop/git/ReversiGame/Point.cpp > CMakeFiles/ReversiGame.dir/Point.cpp.i

CMakeFiles/ReversiGame.dir/Point.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ReversiGame.dir/Point.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dandan/Desktop/git/ReversiGame/Point.cpp -o CMakeFiles/ReversiGame.dir/Point.cpp.s

CMakeFiles/ReversiGame.dir/Point.cpp.o.requires:

.PHONY : CMakeFiles/ReversiGame.dir/Point.cpp.o.requires

CMakeFiles/ReversiGame.dir/Point.cpp.o.provides: CMakeFiles/ReversiGame.dir/Point.cpp.o.requires
	$(MAKE) -f CMakeFiles/ReversiGame.dir/build.make CMakeFiles/ReversiGame.dir/Point.cpp.o.provides.build
.PHONY : CMakeFiles/ReversiGame.dir/Point.cpp.o.provides

CMakeFiles/ReversiGame.dir/Point.cpp.o.provides.build: CMakeFiles/ReversiGame.dir/Point.cpp.o


CMakeFiles/ReversiGame.dir/RegularRules.cpp.o: CMakeFiles/ReversiGame.dir/flags.make
CMakeFiles/ReversiGame.dir/RegularRules.cpp.o: ../RegularRules.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dandan/Desktop/git/ReversiGame/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/ReversiGame.dir/RegularRules.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ReversiGame.dir/RegularRules.cpp.o -c /home/dandan/Desktop/git/ReversiGame/RegularRules.cpp

CMakeFiles/ReversiGame.dir/RegularRules.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ReversiGame.dir/RegularRules.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dandan/Desktop/git/ReversiGame/RegularRules.cpp > CMakeFiles/ReversiGame.dir/RegularRules.cpp.i

CMakeFiles/ReversiGame.dir/RegularRules.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ReversiGame.dir/RegularRules.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dandan/Desktop/git/ReversiGame/RegularRules.cpp -o CMakeFiles/ReversiGame.dir/RegularRules.cpp.s

CMakeFiles/ReversiGame.dir/RegularRules.cpp.o.requires:

.PHONY : CMakeFiles/ReversiGame.dir/RegularRules.cpp.o.requires

CMakeFiles/ReversiGame.dir/RegularRules.cpp.o.provides: CMakeFiles/ReversiGame.dir/RegularRules.cpp.o.requires
	$(MAKE) -f CMakeFiles/ReversiGame.dir/build.make CMakeFiles/ReversiGame.dir/RegularRules.cpp.o.provides.build
.PHONY : CMakeFiles/ReversiGame.dir/RegularRules.cpp.o.provides

CMakeFiles/ReversiGame.dir/RegularRules.cpp.o.provides.build: CMakeFiles/ReversiGame.dir/RegularRules.cpp.o


CMakeFiles/ReversiGame.dir/Rules.cpp.o: CMakeFiles/ReversiGame.dir/flags.make
CMakeFiles/ReversiGame.dir/Rules.cpp.o: ../Rules.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dandan/Desktop/git/ReversiGame/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/ReversiGame.dir/Rules.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ReversiGame.dir/Rules.cpp.o -c /home/dandan/Desktop/git/ReversiGame/Rules.cpp

CMakeFiles/ReversiGame.dir/Rules.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ReversiGame.dir/Rules.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dandan/Desktop/git/ReversiGame/Rules.cpp > CMakeFiles/ReversiGame.dir/Rules.cpp.i

CMakeFiles/ReversiGame.dir/Rules.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ReversiGame.dir/Rules.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dandan/Desktop/git/ReversiGame/Rules.cpp -o CMakeFiles/ReversiGame.dir/Rules.cpp.s

CMakeFiles/ReversiGame.dir/Rules.cpp.o.requires:

.PHONY : CMakeFiles/ReversiGame.dir/Rules.cpp.o.requires

CMakeFiles/ReversiGame.dir/Rules.cpp.o.provides: CMakeFiles/ReversiGame.dir/Rules.cpp.o.requires
	$(MAKE) -f CMakeFiles/ReversiGame.dir/build.make CMakeFiles/ReversiGame.dir/Rules.cpp.o.provides.build
.PHONY : CMakeFiles/ReversiGame.dir/Rules.cpp.o.provides

CMakeFiles/ReversiGame.dir/Rules.cpp.o.provides.build: CMakeFiles/ReversiGame.dir/Rules.cpp.o


CMakeFiles/ReversiGame.dir/GameMenu.cpp.o: CMakeFiles/ReversiGame.dir/flags.make
CMakeFiles/ReversiGame.dir/GameMenu.cpp.o: ../GameMenu.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dandan/Desktop/git/ReversiGame/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/ReversiGame.dir/GameMenu.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ReversiGame.dir/GameMenu.cpp.o -c /home/dandan/Desktop/git/ReversiGame/GameMenu.cpp

CMakeFiles/ReversiGame.dir/GameMenu.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ReversiGame.dir/GameMenu.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dandan/Desktop/git/ReversiGame/GameMenu.cpp > CMakeFiles/ReversiGame.dir/GameMenu.cpp.i

CMakeFiles/ReversiGame.dir/GameMenu.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ReversiGame.dir/GameMenu.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dandan/Desktop/git/ReversiGame/GameMenu.cpp -o CMakeFiles/ReversiGame.dir/GameMenu.cpp.s

CMakeFiles/ReversiGame.dir/GameMenu.cpp.o.requires:

.PHONY : CMakeFiles/ReversiGame.dir/GameMenu.cpp.o.requires

CMakeFiles/ReversiGame.dir/GameMenu.cpp.o.provides: CMakeFiles/ReversiGame.dir/GameMenu.cpp.o.requires
	$(MAKE) -f CMakeFiles/ReversiGame.dir/build.make CMakeFiles/ReversiGame.dir/GameMenu.cpp.o.provides.build
.PHONY : CMakeFiles/ReversiGame.dir/GameMenu.cpp.o.provides

CMakeFiles/ReversiGame.dir/GameMenu.cpp.o.provides.build: CMakeFiles/ReversiGame.dir/GameMenu.cpp.o


CMakeFiles/ReversiGame.dir/Sign.cpp.o: CMakeFiles/ReversiGame.dir/flags.make
CMakeFiles/ReversiGame.dir/Sign.cpp.o: ../Sign.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dandan/Desktop/git/ReversiGame/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/ReversiGame.dir/Sign.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ReversiGame.dir/Sign.cpp.o -c /home/dandan/Desktop/git/ReversiGame/Sign.cpp

CMakeFiles/ReversiGame.dir/Sign.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ReversiGame.dir/Sign.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dandan/Desktop/git/ReversiGame/Sign.cpp > CMakeFiles/ReversiGame.dir/Sign.cpp.i

CMakeFiles/ReversiGame.dir/Sign.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ReversiGame.dir/Sign.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dandan/Desktop/git/ReversiGame/Sign.cpp -o CMakeFiles/ReversiGame.dir/Sign.cpp.s

CMakeFiles/ReversiGame.dir/Sign.cpp.o.requires:

.PHONY : CMakeFiles/ReversiGame.dir/Sign.cpp.o.requires

CMakeFiles/ReversiGame.dir/Sign.cpp.o.provides: CMakeFiles/ReversiGame.dir/Sign.cpp.o.requires
	$(MAKE) -f CMakeFiles/ReversiGame.dir/build.make CMakeFiles/ReversiGame.dir/Sign.cpp.o.provides.build
.PHONY : CMakeFiles/ReversiGame.dir/Sign.cpp.o.provides

CMakeFiles/ReversiGame.dir/Sign.cpp.o.provides.build: CMakeFiles/ReversiGame.dir/Sign.cpp.o


CMakeFiles/ReversiGame.dir/main.cpp.o: CMakeFiles/ReversiGame.dir/flags.make
CMakeFiles/ReversiGame.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/dandan/Desktop/git/ReversiGame/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/ReversiGame.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ReversiGame.dir/main.cpp.o -c /home/dandan/Desktop/git/ReversiGame/main.cpp

CMakeFiles/ReversiGame.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ReversiGame.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/dandan/Desktop/git/ReversiGame/main.cpp > CMakeFiles/ReversiGame.dir/main.cpp.i

CMakeFiles/ReversiGame.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ReversiGame.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/dandan/Desktop/git/ReversiGame/main.cpp -o CMakeFiles/ReversiGame.dir/main.cpp.s

CMakeFiles/ReversiGame.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/ReversiGame.dir/main.cpp.o.requires

CMakeFiles/ReversiGame.dir/main.cpp.o.provides: CMakeFiles/ReversiGame.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/ReversiGame.dir/build.make CMakeFiles/ReversiGame.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/ReversiGame.dir/main.cpp.o.provides

CMakeFiles/ReversiGame.dir/main.cpp.o.provides.build: CMakeFiles/ReversiGame.dir/main.cpp.o


# Object files for target ReversiGame
ReversiGame_OBJECTS = \
"CMakeFiles/ReversiGame.dir/AIPlayer.cpp.o" \
"CMakeFiles/ReversiGame.dir/Board.cpp.o" \
"CMakeFiles/ReversiGame.dir/ConsolePlayer.cpp.o" \
"CMakeFiles/ReversiGame.dir/Game.cpp.o" \
"CMakeFiles/ReversiGame.dir/Player.cpp.o" \
"CMakeFiles/ReversiGame.dir/Point.cpp.o" \
"CMakeFiles/ReversiGame.dir/RegularRules.cpp.o" \
"CMakeFiles/ReversiGame.dir/Rules.cpp.o" \
"CMakeFiles/ReversiGame.dir/GameMenu.cpp.o" \
"CMakeFiles/ReversiGame.dir/Sign.cpp.o" \
"CMakeFiles/ReversiGame.dir/main.cpp.o"

# External object files for target ReversiGame
ReversiGame_EXTERNAL_OBJECTS =

ReversiGame: CMakeFiles/ReversiGame.dir/AIPlayer.cpp.o
ReversiGame: CMakeFiles/ReversiGame.dir/Board.cpp.o
ReversiGame: CMakeFiles/ReversiGame.dir/ConsolePlayer.cpp.o
ReversiGame: CMakeFiles/ReversiGame.dir/Game.cpp.o
ReversiGame: CMakeFiles/ReversiGame.dir/Player.cpp.o
ReversiGame: CMakeFiles/ReversiGame.dir/Point.cpp.o
ReversiGame: CMakeFiles/ReversiGame.dir/RegularRules.cpp.o
ReversiGame: CMakeFiles/ReversiGame.dir/Rules.cpp.o
ReversiGame: CMakeFiles/ReversiGame.dir/GameMenu.cpp.o
ReversiGame: CMakeFiles/ReversiGame.dir/Sign.cpp.o
ReversiGame: CMakeFiles/ReversiGame.dir/main.cpp.o
ReversiGame: CMakeFiles/ReversiGame.dir/build.make
ReversiGame: CMakeFiles/ReversiGame.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/dandan/Desktop/git/ReversiGame/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Linking CXX executable ReversiGame"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ReversiGame.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ReversiGame.dir/build: ReversiGame

.PHONY : CMakeFiles/ReversiGame.dir/build

CMakeFiles/ReversiGame.dir/requires: CMakeFiles/ReversiGame.dir/AIPlayer.cpp.o.requires
CMakeFiles/ReversiGame.dir/requires: CMakeFiles/ReversiGame.dir/Board.cpp.o.requires
CMakeFiles/ReversiGame.dir/requires: CMakeFiles/ReversiGame.dir/ConsolePlayer.cpp.o.requires
CMakeFiles/ReversiGame.dir/requires: CMakeFiles/ReversiGame.dir/Game.cpp.o.requires
CMakeFiles/ReversiGame.dir/requires: CMakeFiles/ReversiGame.dir/Player.cpp.o.requires
CMakeFiles/ReversiGame.dir/requires: CMakeFiles/ReversiGame.dir/Point.cpp.o.requires
CMakeFiles/ReversiGame.dir/requires: CMakeFiles/ReversiGame.dir/RegularRules.cpp.o.requires
CMakeFiles/ReversiGame.dir/requires: CMakeFiles/ReversiGame.dir/Rules.cpp.o.requires
CMakeFiles/ReversiGame.dir/requires: CMakeFiles/ReversiGame.dir/GameMenu.cpp.o.requires
CMakeFiles/ReversiGame.dir/requires: CMakeFiles/ReversiGame.dir/Sign.cpp.o.requires
CMakeFiles/ReversiGame.dir/requires: CMakeFiles/ReversiGame.dir/main.cpp.o.requires

.PHONY : CMakeFiles/ReversiGame.dir/requires

CMakeFiles/ReversiGame.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ReversiGame.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ReversiGame.dir/clean

CMakeFiles/ReversiGame.dir/depend:
	cd /home/dandan/Desktop/git/ReversiGame/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/dandan/Desktop/git/ReversiGame /home/dandan/Desktop/git/ReversiGame /home/dandan/Desktop/git/ReversiGame/cmake-build-debug /home/dandan/Desktop/git/ReversiGame/cmake-build-debug /home/dandan/Desktop/git/ReversiGame/cmake-build-debug/CMakeFiles/ReversiGame.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ReversiGame.dir/depend

