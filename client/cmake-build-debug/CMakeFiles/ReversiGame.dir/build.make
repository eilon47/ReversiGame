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
CMAKE_COMMAND = /home/elon/Downloads/clion-2017.2.3/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/elon/Downloads/clion-2017.2.3/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/elon/Desktop/Git/ReversiGame/client

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/elon/Desktop/Git/ReversiGame/client/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ReversiGame.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ReversiGame.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ReversiGame.dir/flags.make

CMakeFiles/ReversiGame.dir/src/AIPlayer.cpp.o: CMakeFiles/ReversiGame.dir/flags.make
CMakeFiles/ReversiGame.dir/src/AIPlayer.cpp.o: ../src/AIPlayer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/elon/Desktop/Git/ReversiGame/client/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ReversiGame.dir/src/AIPlayer.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ReversiGame.dir/src/AIPlayer.cpp.o -c /home/elon/Desktop/Git/ReversiGame/client/src/AIPlayer.cpp

CMakeFiles/ReversiGame.dir/src/AIPlayer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ReversiGame.dir/src/AIPlayer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/elon/Desktop/Git/ReversiGame/client/src/AIPlayer.cpp > CMakeFiles/ReversiGame.dir/src/AIPlayer.cpp.i

CMakeFiles/ReversiGame.dir/src/AIPlayer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ReversiGame.dir/src/AIPlayer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/elon/Desktop/Git/ReversiGame/client/src/AIPlayer.cpp -o CMakeFiles/ReversiGame.dir/src/AIPlayer.cpp.s

CMakeFiles/ReversiGame.dir/src/AIPlayer.cpp.o.requires:

.PHONY : CMakeFiles/ReversiGame.dir/src/AIPlayer.cpp.o.requires

CMakeFiles/ReversiGame.dir/src/AIPlayer.cpp.o.provides: CMakeFiles/ReversiGame.dir/src/AIPlayer.cpp.o.requires
	$(MAKE) -f CMakeFiles/ReversiGame.dir/build.make CMakeFiles/ReversiGame.dir/src/AIPlayer.cpp.o.provides.build
.PHONY : CMakeFiles/ReversiGame.dir/src/AIPlayer.cpp.o.provides

CMakeFiles/ReversiGame.dir/src/AIPlayer.cpp.o.provides.build: CMakeFiles/ReversiGame.dir/src/AIPlayer.cpp.o


CMakeFiles/ReversiGame.dir/src/Board.cpp.o: CMakeFiles/ReversiGame.dir/flags.make
CMakeFiles/ReversiGame.dir/src/Board.cpp.o: ../src/Board.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/elon/Desktop/Git/ReversiGame/client/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/ReversiGame.dir/src/Board.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ReversiGame.dir/src/Board.cpp.o -c /home/elon/Desktop/Git/ReversiGame/client/src/Board.cpp

CMakeFiles/ReversiGame.dir/src/Board.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ReversiGame.dir/src/Board.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/elon/Desktop/Git/ReversiGame/client/src/Board.cpp > CMakeFiles/ReversiGame.dir/src/Board.cpp.i

CMakeFiles/ReversiGame.dir/src/Board.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ReversiGame.dir/src/Board.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/elon/Desktop/Git/ReversiGame/client/src/Board.cpp -o CMakeFiles/ReversiGame.dir/src/Board.cpp.s

CMakeFiles/ReversiGame.dir/src/Board.cpp.o.requires:

.PHONY : CMakeFiles/ReversiGame.dir/src/Board.cpp.o.requires

CMakeFiles/ReversiGame.dir/src/Board.cpp.o.provides: CMakeFiles/ReversiGame.dir/src/Board.cpp.o.requires
	$(MAKE) -f CMakeFiles/ReversiGame.dir/build.make CMakeFiles/ReversiGame.dir/src/Board.cpp.o.provides.build
.PHONY : CMakeFiles/ReversiGame.dir/src/Board.cpp.o.provides

CMakeFiles/ReversiGame.dir/src/Board.cpp.o.provides.build: CMakeFiles/ReversiGame.dir/src/Board.cpp.o


CMakeFiles/ReversiGame.dir/src/HumanPlayer.cpp.o: CMakeFiles/ReversiGame.dir/flags.make
CMakeFiles/ReversiGame.dir/src/HumanPlayer.cpp.o: ../src/HumanPlayer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/elon/Desktop/Git/ReversiGame/client/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/ReversiGame.dir/src/HumanPlayer.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ReversiGame.dir/src/HumanPlayer.cpp.o -c /home/elon/Desktop/Git/ReversiGame/client/src/HumanPlayer.cpp

CMakeFiles/ReversiGame.dir/src/HumanPlayer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ReversiGame.dir/src/HumanPlayer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/elon/Desktop/Git/ReversiGame/client/src/HumanPlayer.cpp > CMakeFiles/ReversiGame.dir/src/HumanPlayer.cpp.i

CMakeFiles/ReversiGame.dir/src/HumanPlayer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ReversiGame.dir/src/HumanPlayer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/elon/Desktop/Git/ReversiGame/client/src/HumanPlayer.cpp -o CMakeFiles/ReversiGame.dir/src/HumanPlayer.cpp.s

CMakeFiles/ReversiGame.dir/src/HumanPlayer.cpp.o.requires:

.PHONY : CMakeFiles/ReversiGame.dir/src/HumanPlayer.cpp.o.requires

CMakeFiles/ReversiGame.dir/src/HumanPlayer.cpp.o.provides: CMakeFiles/ReversiGame.dir/src/HumanPlayer.cpp.o.requires
	$(MAKE) -f CMakeFiles/ReversiGame.dir/build.make CMakeFiles/ReversiGame.dir/src/HumanPlayer.cpp.o.provides.build
.PHONY : CMakeFiles/ReversiGame.dir/src/HumanPlayer.cpp.o.provides

CMakeFiles/ReversiGame.dir/src/HumanPlayer.cpp.o.provides.build: CMakeFiles/ReversiGame.dir/src/HumanPlayer.cpp.o


CMakeFiles/ReversiGame.dir/src/Game.cpp.o: CMakeFiles/ReversiGame.dir/flags.make
CMakeFiles/ReversiGame.dir/src/Game.cpp.o: ../src/Game.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/elon/Desktop/Git/ReversiGame/client/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/ReversiGame.dir/src/Game.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ReversiGame.dir/src/Game.cpp.o -c /home/elon/Desktop/Git/ReversiGame/client/src/Game.cpp

CMakeFiles/ReversiGame.dir/src/Game.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ReversiGame.dir/src/Game.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/elon/Desktop/Git/ReversiGame/client/src/Game.cpp > CMakeFiles/ReversiGame.dir/src/Game.cpp.i

CMakeFiles/ReversiGame.dir/src/Game.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ReversiGame.dir/src/Game.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/elon/Desktop/Git/ReversiGame/client/src/Game.cpp -o CMakeFiles/ReversiGame.dir/src/Game.cpp.s

CMakeFiles/ReversiGame.dir/src/Game.cpp.o.requires:

.PHONY : CMakeFiles/ReversiGame.dir/src/Game.cpp.o.requires

CMakeFiles/ReversiGame.dir/src/Game.cpp.o.provides: CMakeFiles/ReversiGame.dir/src/Game.cpp.o.requires
	$(MAKE) -f CMakeFiles/ReversiGame.dir/build.make CMakeFiles/ReversiGame.dir/src/Game.cpp.o.provides.build
.PHONY : CMakeFiles/ReversiGame.dir/src/Game.cpp.o.provides

CMakeFiles/ReversiGame.dir/src/Game.cpp.o.provides.build: CMakeFiles/ReversiGame.dir/src/Game.cpp.o


CMakeFiles/ReversiGame.dir/src/Player.cpp.o: CMakeFiles/ReversiGame.dir/flags.make
CMakeFiles/ReversiGame.dir/src/Player.cpp.o: ../src/Player.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/elon/Desktop/Git/ReversiGame/client/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/ReversiGame.dir/src/Player.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ReversiGame.dir/src/Player.cpp.o -c /home/elon/Desktop/Git/ReversiGame/client/src/Player.cpp

CMakeFiles/ReversiGame.dir/src/Player.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ReversiGame.dir/src/Player.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/elon/Desktop/Git/ReversiGame/client/src/Player.cpp > CMakeFiles/ReversiGame.dir/src/Player.cpp.i

CMakeFiles/ReversiGame.dir/src/Player.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ReversiGame.dir/src/Player.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/elon/Desktop/Git/ReversiGame/client/src/Player.cpp -o CMakeFiles/ReversiGame.dir/src/Player.cpp.s

CMakeFiles/ReversiGame.dir/src/Player.cpp.o.requires:

.PHONY : CMakeFiles/ReversiGame.dir/src/Player.cpp.o.requires

CMakeFiles/ReversiGame.dir/src/Player.cpp.o.provides: CMakeFiles/ReversiGame.dir/src/Player.cpp.o.requires
	$(MAKE) -f CMakeFiles/ReversiGame.dir/build.make CMakeFiles/ReversiGame.dir/src/Player.cpp.o.provides.build
.PHONY : CMakeFiles/ReversiGame.dir/src/Player.cpp.o.provides

CMakeFiles/ReversiGame.dir/src/Player.cpp.o.provides.build: CMakeFiles/ReversiGame.dir/src/Player.cpp.o


CMakeFiles/ReversiGame.dir/src/Sign.cpp.o: CMakeFiles/ReversiGame.dir/flags.make
CMakeFiles/ReversiGame.dir/src/Sign.cpp.o: ../src/Sign.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/elon/Desktop/Git/ReversiGame/client/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/ReversiGame.dir/src/Sign.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ReversiGame.dir/src/Sign.cpp.o -c /home/elon/Desktop/Git/ReversiGame/client/src/Sign.cpp

CMakeFiles/ReversiGame.dir/src/Sign.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ReversiGame.dir/src/Sign.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/elon/Desktop/Git/ReversiGame/client/src/Sign.cpp > CMakeFiles/ReversiGame.dir/src/Sign.cpp.i

CMakeFiles/ReversiGame.dir/src/Sign.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ReversiGame.dir/src/Sign.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/elon/Desktop/Git/ReversiGame/client/src/Sign.cpp -o CMakeFiles/ReversiGame.dir/src/Sign.cpp.s

CMakeFiles/ReversiGame.dir/src/Sign.cpp.o.requires:

.PHONY : CMakeFiles/ReversiGame.dir/src/Sign.cpp.o.requires

CMakeFiles/ReversiGame.dir/src/Sign.cpp.o.provides: CMakeFiles/ReversiGame.dir/src/Sign.cpp.o.requires
	$(MAKE) -f CMakeFiles/ReversiGame.dir/build.make CMakeFiles/ReversiGame.dir/src/Sign.cpp.o.provides.build
.PHONY : CMakeFiles/ReversiGame.dir/src/Sign.cpp.o.provides

CMakeFiles/ReversiGame.dir/src/Sign.cpp.o.provides.build: CMakeFiles/ReversiGame.dir/src/Sign.cpp.o


CMakeFiles/ReversiGame.dir/src/Point.cpp.o: CMakeFiles/ReversiGame.dir/flags.make
CMakeFiles/ReversiGame.dir/src/Point.cpp.o: ../src/Point.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/elon/Desktop/Git/ReversiGame/client/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/ReversiGame.dir/src/Point.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ReversiGame.dir/src/Point.cpp.o -c /home/elon/Desktop/Git/ReversiGame/client/src/Point.cpp

CMakeFiles/ReversiGame.dir/src/Point.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ReversiGame.dir/src/Point.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/elon/Desktop/Git/ReversiGame/client/src/Point.cpp > CMakeFiles/ReversiGame.dir/src/Point.cpp.i

CMakeFiles/ReversiGame.dir/src/Point.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ReversiGame.dir/src/Point.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/elon/Desktop/Git/ReversiGame/client/src/Point.cpp -o CMakeFiles/ReversiGame.dir/src/Point.cpp.s

CMakeFiles/ReversiGame.dir/src/Point.cpp.o.requires:

.PHONY : CMakeFiles/ReversiGame.dir/src/Point.cpp.o.requires

CMakeFiles/ReversiGame.dir/src/Point.cpp.o.provides: CMakeFiles/ReversiGame.dir/src/Point.cpp.o.requires
	$(MAKE) -f CMakeFiles/ReversiGame.dir/build.make CMakeFiles/ReversiGame.dir/src/Point.cpp.o.provides.build
.PHONY : CMakeFiles/ReversiGame.dir/src/Point.cpp.o.provides

CMakeFiles/ReversiGame.dir/src/Point.cpp.o.provides.build: CMakeFiles/ReversiGame.dir/src/Point.cpp.o


CMakeFiles/ReversiGame.dir/src/RegularRules.cpp.o: CMakeFiles/ReversiGame.dir/flags.make
CMakeFiles/ReversiGame.dir/src/RegularRules.cpp.o: ../src/RegularRules.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/elon/Desktop/Git/ReversiGame/client/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/ReversiGame.dir/src/RegularRules.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ReversiGame.dir/src/RegularRules.cpp.o -c /home/elon/Desktop/Git/ReversiGame/client/src/RegularRules.cpp

CMakeFiles/ReversiGame.dir/src/RegularRules.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ReversiGame.dir/src/RegularRules.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/elon/Desktop/Git/ReversiGame/client/src/RegularRules.cpp > CMakeFiles/ReversiGame.dir/src/RegularRules.cpp.i

CMakeFiles/ReversiGame.dir/src/RegularRules.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ReversiGame.dir/src/RegularRules.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/elon/Desktop/Git/ReversiGame/client/src/RegularRules.cpp -o CMakeFiles/ReversiGame.dir/src/RegularRules.cpp.s

CMakeFiles/ReversiGame.dir/src/RegularRules.cpp.o.requires:

.PHONY : CMakeFiles/ReversiGame.dir/src/RegularRules.cpp.o.requires

CMakeFiles/ReversiGame.dir/src/RegularRules.cpp.o.provides: CMakeFiles/ReversiGame.dir/src/RegularRules.cpp.o.requires
	$(MAKE) -f CMakeFiles/ReversiGame.dir/build.make CMakeFiles/ReversiGame.dir/src/RegularRules.cpp.o.provides.build
.PHONY : CMakeFiles/ReversiGame.dir/src/RegularRules.cpp.o.provides

CMakeFiles/ReversiGame.dir/src/RegularRules.cpp.o.provides.build: CMakeFiles/ReversiGame.dir/src/RegularRules.cpp.o


CMakeFiles/ReversiGame.dir/src/Rules.cpp.o: CMakeFiles/ReversiGame.dir/flags.make
CMakeFiles/ReversiGame.dir/src/Rules.cpp.o: ../src/Rules.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/elon/Desktop/Git/ReversiGame/client/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/ReversiGame.dir/src/Rules.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ReversiGame.dir/src/Rules.cpp.o -c /home/elon/Desktop/Git/ReversiGame/client/src/Rules.cpp

CMakeFiles/ReversiGame.dir/src/Rules.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ReversiGame.dir/src/Rules.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/elon/Desktop/Git/ReversiGame/client/src/Rules.cpp > CMakeFiles/ReversiGame.dir/src/Rules.cpp.i

CMakeFiles/ReversiGame.dir/src/Rules.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ReversiGame.dir/src/Rules.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/elon/Desktop/Git/ReversiGame/client/src/Rules.cpp -o CMakeFiles/ReversiGame.dir/src/Rules.cpp.s

CMakeFiles/ReversiGame.dir/src/Rules.cpp.o.requires:

.PHONY : CMakeFiles/ReversiGame.dir/src/Rules.cpp.o.requires

CMakeFiles/ReversiGame.dir/src/Rules.cpp.o.provides: CMakeFiles/ReversiGame.dir/src/Rules.cpp.o.requires
	$(MAKE) -f CMakeFiles/ReversiGame.dir/build.make CMakeFiles/ReversiGame.dir/src/Rules.cpp.o.provides.build
.PHONY : CMakeFiles/ReversiGame.dir/src/Rules.cpp.o.provides

CMakeFiles/ReversiGame.dir/src/Rules.cpp.o.provides.build: CMakeFiles/ReversiGame.dir/src/Rules.cpp.o


CMakeFiles/ReversiGame.dir/src/GameMenu.cpp.o: CMakeFiles/ReversiGame.dir/flags.make
CMakeFiles/ReversiGame.dir/src/GameMenu.cpp.o: ../src/GameMenu.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/elon/Desktop/Git/ReversiGame/client/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/ReversiGame.dir/src/GameMenu.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ReversiGame.dir/src/GameMenu.cpp.o -c /home/elon/Desktop/Git/ReversiGame/client/src/GameMenu.cpp

CMakeFiles/ReversiGame.dir/src/GameMenu.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ReversiGame.dir/src/GameMenu.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/elon/Desktop/Git/ReversiGame/client/src/GameMenu.cpp > CMakeFiles/ReversiGame.dir/src/GameMenu.cpp.i

CMakeFiles/ReversiGame.dir/src/GameMenu.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ReversiGame.dir/src/GameMenu.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/elon/Desktop/Git/ReversiGame/client/src/GameMenu.cpp -o CMakeFiles/ReversiGame.dir/src/GameMenu.cpp.s

CMakeFiles/ReversiGame.dir/src/GameMenu.cpp.o.requires:

.PHONY : CMakeFiles/ReversiGame.dir/src/GameMenu.cpp.o.requires

CMakeFiles/ReversiGame.dir/src/GameMenu.cpp.o.provides: CMakeFiles/ReversiGame.dir/src/GameMenu.cpp.o.requires
	$(MAKE) -f CMakeFiles/ReversiGame.dir/build.make CMakeFiles/ReversiGame.dir/src/GameMenu.cpp.o.provides.build
.PHONY : CMakeFiles/ReversiGame.dir/src/GameMenu.cpp.o.provides

CMakeFiles/ReversiGame.dir/src/GameMenu.cpp.o.provides.build: CMakeFiles/ReversiGame.dir/src/GameMenu.cpp.o


CMakeFiles/ReversiGame.dir/src/ConsoleDisplay.cpp.o: CMakeFiles/ReversiGame.dir/flags.make
CMakeFiles/ReversiGame.dir/src/ConsoleDisplay.cpp.o: ../src/ConsoleDisplay.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/elon/Desktop/Git/ReversiGame/client/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/ReversiGame.dir/src/ConsoleDisplay.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ReversiGame.dir/src/ConsoleDisplay.cpp.o -c /home/elon/Desktop/Git/ReversiGame/client/src/ConsoleDisplay.cpp

CMakeFiles/ReversiGame.dir/src/ConsoleDisplay.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ReversiGame.dir/src/ConsoleDisplay.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/elon/Desktop/Git/ReversiGame/client/src/ConsoleDisplay.cpp > CMakeFiles/ReversiGame.dir/src/ConsoleDisplay.cpp.i

CMakeFiles/ReversiGame.dir/src/ConsoleDisplay.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ReversiGame.dir/src/ConsoleDisplay.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/elon/Desktop/Git/ReversiGame/client/src/ConsoleDisplay.cpp -o CMakeFiles/ReversiGame.dir/src/ConsoleDisplay.cpp.s

CMakeFiles/ReversiGame.dir/src/ConsoleDisplay.cpp.o.requires:

.PHONY : CMakeFiles/ReversiGame.dir/src/ConsoleDisplay.cpp.o.requires

CMakeFiles/ReversiGame.dir/src/ConsoleDisplay.cpp.o.provides: CMakeFiles/ReversiGame.dir/src/ConsoleDisplay.cpp.o.requires
	$(MAKE) -f CMakeFiles/ReversiGame.dir/build.make CMakeFiles/ReversiGame.dir/src/ConsoleDisplay.cpp.o.provides.build
.PHONY : CMakeFiles/ReversiGame.dir/src/ConsoleDisplay.cpp.o.provides

CMakeFiles/ReversiGame.dir/src/ConsoleDisplay.cpp.o.provides.build: CMakeFiles/ReversiGame.dir/src/ConsoleDisplay.cpp.o


CMakeFiles/ReversiGame.dir/src/Client.cpp.o: CMakeFiles/ReversiGame.dir/flags.make
CMakeFiles/ReversiGame.dir/src/Client.cpp.o: ../src/Client.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/elon/Desktop/Git/ReversiGame/client/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/ReversiGame.dir/src/Client.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ReversiGame.dir/src/Client.cpp.o -c /home/elon/Desktop/Git/ReversiGame/client/src/Client.cpp

CMakeFiles/ReversiGame.dir/src/Client.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ReversiGame.dir/src/Client.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/elon/Desktop/Git/ReversiGame/client/src/Client.cpp > CMakeFiles/ReversiGame.dir/src/Client.cpp.i

CMakeFiles/ReversiGame.dir/src/Client.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ReversiGame.dir/src/Client.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/elon/Desktop/Git/ReversiGame/client/src/Client.cpp -o CMakeFiles/ReversiGame.dir/src/Client.cpp.s

CMakeFiles/ReversiGame.dir/src/Client.cpp.o.requires:

.PHONY : CMakeFiles/ReversiGame.dir/src/Client.cpp.o.requires

CMakeFiles/ReversiGame.dir/src/Client.cpp.o.provides: CMakeFiles/ReversiGame.dir/src/Client.cpp.o.requires
	$(MAKE) -f CMakeFiles/ReversiGame.dir/build.make CMakeFiles/ReversiGame.dir/src/Client.cpp.o.provides.build
.PHONY : CMakeFiles/ReversiGame.dir/src/Client.cpp.o.provides

CMakeFiles/ReversiGame.dir/src/Client.cpp.o.provides.build: CMakeFiles/ReversiGame.dir/src/Client.cpp.o


CMakeFiles/ReversiGame.dir/src/NetworkPlayer.cpp.o: CMakeFiles/ReversiGame.dir/flags.make
CMakeFiles/ReversiGame.dir/src/NetworkPlayer.cpp.o: ../src/NetworkPlayer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/elon/Desktop/Git/ReversiGame/client/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object CMakeFiles/ReversiGame.dir/src/NetworkPlayer.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ReversiGame.dir/src/NetworkPlayer.cpp.o -c /home/elon/Desktop/Git/ReversiGame/client/src/NetworkPlayer.cpp

CMakeFiles/ReversiGame.dir/src/NetworkPlayer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ReversiGame.dir/src/NetworkPlayer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/elon/Desktop/Git/ReversiGame/client/src/NetworkPlayer.cpp > CMakeFiles/ReversiGame.dir/src/NetworkPlayer.cpp.i

CMakeFiles/ReversiGame.dir/src/NetworkPlayer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ReversiGame.dir/src/NetworkPlayer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/elon/Desktop/Git/ReversiGame/client/src/NetworkPlayer.cpp -o CMakeFiles/ReversiGame.dir/src/NetworkPlayer.cpp.s

CMakeFiles/ReversiGame.dir/src/NetworkPlayer.cpp.o.requires:

.PHONY : CMakeFiles/ReversiGame.dir/src/NetworkPlayer.cpp.o.requires

CMakeFiles/ReversiGame.dir/src/NetworkPlayer.cpp.o.provides: CMakeFiles/ReversiGame.dir/src/NetworkPlayer.cpp.o.requires
	$(MAKE) -f CMakeFiles/ReversiGame.dir/build.make CMakeFiles/ReversiGame.dir/src/NetworkPlayer.cpp.o.provides.build
.PHONY : CMakeFiles/ReversiGame.dir/src/NetworkPlayer.cpp.o.provides

CMakeFiles/ReversiGame.dir/src/NetworkPlayer.cpp.o.provides.build: CMakeFiles/ReversiGame.dir/src/NetworkPlayer.cpp.o


CMakeFiles/ReversiGame.dir/main.cpp.o: CMakeFiles/ReversiGame.dir/flags.make
CMakeFiles/ReversiGame.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/elon/Desktop/Git/ReversiGame/client/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building CXX object CMakeFiles/ReversiGame.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ReversiGame.dir/main.cpp.o -c /home/elon/Desktop/Git/ReversiGame/client/main.cpp

CMakeFiles/ReversiGame.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ReversiGame.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/elon/Desktop/Git/ReversiGame/client/main.cpp > CMakeFiles/ReversiGame.dir/main.cpp.i

CMakeFiles/ReversiGame.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ReversiGame.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/elon/Desktop/Git/ReversiGame/client/main.cpp -o CMakeFiles/ReversiGame.dir/main.cpp.s

CMakeFiles/ReversiGame.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/ReversiGame.dir/main.cpp.o.requires

CMakeFiles/ReversiGame.dir/main.cpp.o.provides: CMakeFiles/ReversiGame.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/ReversiGame.dir/build.make CMakeFiles/ReversiGame.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/ReversiGame.dir/main.cpp.o.provides

CMakeFiles/ReversiGame.dir/main.cpp.o.provides.build: CMakeFiles/ReversiGame.dir/main.cpp.o


CMakeFiles/ReversiGame.dir/src/NetworkReadPlayer.cpp.o: CMakeFiles/ReversiGame.dir/flags.make
CMakeFiles/ReversiGame.dir/src/NetworkReadPlayer.cpp.o: ../src/NetworkReadPlayer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/elon/Desktop/Git/ReversiGame/client/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Building CXX object CMakeFiles/ReversiGame.dir/src/NetworkReadPlayer.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ReversiGame.dir/src/NetworkReadPlayer.cpp.o -c /home/elon/Desktop/Git/ReversiGame/client/src/NetworkReadPlayer.cpp

CMakeFiles/ReversiGame.dir/src/NetworkReadPlayer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ReversiGame.dir/src/NetworkReadPlayer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/elon/Desktop/Git/ReversiGame/client/src/NetworkReadPlayer.cpp > CMakeFiles/ReversiGame.dir/src/NetworkReadPlayer.cpp.i

CMakeFiles/ReversiGame.dir/src/NetworkReadPlayer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ReversiGame.dir/src/NetworkReadPlayer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/elon/Desktop/Git/ReversiGame/client/src/NetworkReadPlayer.cpp -o CMakeFiles/ReversiGame.dir/src/NetworkReadPlayer.cpp.s

CMakeFiles/ReversiGame.dir/src/NetworkReadPlayer.cpp.o.requires:

.PHONY : CMakeFiles/ReversiGame.dir/src/NetworkReadPlayer.cpp.o.requires

CMakeFiles/ReversiGame.dir/src/NetworkReadPlayer.cpp.o.provides: CMakeFiles/ReversiGame.dir/src/NetworkReadPlayer.cpp.o.requires
	$(MAKE) -f CMakeFiles/ReversiGame.dir/build.make CMakeFiles/ReversiGame.dir/src/NetworkReadPlayer.cpp.o.provides.build
.PHONY : CMakeFiles/ReversiGame.dir/src/NetworkReadPlayer.cpp.o.provides

CMakeFiles/ReversiGame.dir/src/NetworkReadPlayer.cpp.o.provides.build: CMakeFiles/ReversiGame.dir/src/NetworkReadPlayer.cpp.o


# Object files for target ReversiGame
ReversiGame_OBJECTS = \
"CMakeFiles/ReversiGame.dir/src/AIPlayer.cpp.o" \
"CMakeFiles/ReversiGame.dir/src/Board.cpp.o" \
"CMakeFiles/ReversiGame.dir/src/HumanPlayer.cpp.o" \
"CMakeFiles/ReversiGame.dir/src/Game.cpp.o" \
"CMakeFiles/ReversiGame.dir/src/Player.cpp.o" \
"CMakeFiles/ReversiGame.dir/src/Sign.cpp.o" \
"CMakeFiles/ReversiGame.dir/src/Point.cpp.o" \
"CMakeFiles/ReversiGame.dir/src/RegularRules.cpp.o" \
"CMakeFiles/ReversiGame.dir/src/Rules.cpp.o" \
"CMakeFiles/ReversiGame.dir/src/GameMenu.cpp.o" \
"CMakeFiles/ReversiGame.dir/src/ConsoleDisplay.cpp.o" \
"CMakeFiles/ReversiGame.dir/src/Client.cpp.o" \
"CMakeFiles/ReversiGame.dir/src/NetworkPlayer.cpp.o" \
"CMakeFiles/ReversiGame.dir/main.cpp.o" \
"CMakeFiles/ReversiGame.dir/src/NetworkReadPlayer.cpp.o"

# External object files for target ReversiGame
ReversiGame_EXTERNAL_OBJECTS =

ReversiGame: CMakeFiles/ReversiGame.dir/src/AIPlayer.cpp.o
ReversiGame: CMakeFiles/ReversiGame.dir/src/Board.cpp.o
ReversiGame: CMakeFiles/ReversiGame.dir/src/HumanPlayer.cpp.o
ReversiGame: CMakeFiles/ReversiGame.dir/src/Game.cpp.o
ReversiGame: CMakeFiles/ReversiGame.dir/src/Player.cpp.o
ReversiGame: CMakeFiles/ReversiGame.dir/src/Sign.cpp.o
ReversiGame: CMakeFiles/ReversiGame.dir/src/Point.cpp.o
ReversiGame: CMakeFiles/ReversiGame.dir/src/RegularRules.cpp.o
ReversiGame: CMakeFiles/ReversiGame.dir/src/Rules.cpp.o
ReversiGame: CMakeFiles/ReversiGame.dir/src/GameMenu.cpp.o
ReversiGame: CMakeFiles/ReversiGame.dir/src/ConsoleDisplay.cpp.o
ReversiGame: CMakeFiles/ReversiGame.dir/src/Client.cpp.o
ReversiGame: CMakeFiles/ReversiGame.dir/src/NetworkPlayer.cpp.o
ReversiGame: CMakeFiles/ReversiGame.dir/main.cpp.o
ReversiGame: CMakeFiles/ReversiGame.dir/src/NetworkReadPlayer.cpp.o
ReversiGame: CMakeFiles/ReversiGame.dir/build.make
ReversiGame: CMakeFiles/ReversiGame.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/elon/Desktop/Git/ReversiGame/client/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_16) "Linking CXX executable ReversiGame"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ReversiGame.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ReversiGame.dir/build: ReversiGame

.PHONY : CMakeFiles/ReversiGame.dir/build

CMakeFiles/ReversiGame.dir/requires: CMakeFiles/ReversiGame.dir/src/AIPlayer.cpp.o.requires
CMakeFiles/ReversiGame.dir/requires: CMakeFiles/ReversiGame.dir/src/Board.cpp.o.requires
CMakeFiles/ReversiGame.dir/requires: CMakeFiles/ReversiGame.dir/src/HumanPlayer.cpp.o.requires
CMakeFiles/ReversiGame.dir/requires: CMakeFiles/ReversiGame.dir/src/Game.cpp.o.requires
CMakeFiles/ReversiGame.dir/requires: CMakeFiles/ReversiGame.dir/src/Player.cpp.o.requires
CMakeFiles/ReversiGame.dir/requires: CMakeFiles/ReversiGame.dir/src/Sign.cpp.o.requires
CMakeFiles/ReversiGame.dir/requires: CMakeFiles/ReversiGame.dir/src/Point.cpp.o.requires
CMakeFiles/ReversiGame.dir/requires: CMakeFiles/ReversiGame.dir/src/RegularRules.cpp.o.requires
CMakeFiles/ReversiGame.dir/requires: CMakeFiles/ReversiGame.dir/src/Rules.cpp.o.requires
CMakeFiles/ReversiGame.dir/requires: CMakeFiles/ReversiGame.dir/src/GameMenu.cpp.o.requires
CMakeFiles/ReversiGame.dir/requires: CMakeFiles/ReversiGame.dir/src/ConsoleDisplay.cpp.o.requires
CMakeFiles/ReversiGame.dir/requires: CMakeFiles/ReversiGame.dir/src/Client.cpp.o.requires
CMakeFiles/ReversiGame.dir/requires: CMakeFiles/ReversiGame.dir/src/NetworkPlayer.cpp.o.requires
CMakeFiles/ReversiGame.dir/requires: CMakeFiles/ReversiGame.dir/main.cpp.o.requires
CMakeFiles/ReversiGame.dir/requires: CMakeFiles/ReversiGame.dir/src/NetworkReadPlayer.cpp.o.requires

.PHONY : CMakeFiles/ReversiGame.dir/requires

CMakeFiles/ReversiGame.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ReversiGame.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ReversiGame.dir/clean

CMakeFiles/ReversiGame.dir/depend:
	cd /home/elon/Desktop/Git/ReversiGame/client/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/elon/Desktop/Git/ReversiGame/client /home/elon/Desktop/Git/ReversiGame/client /home/elon/Desktop/Git/ReversiGame/client/cmake-build-debug /home/elon/Desktop/Git/ReversiGame/client/cmake-build-debug /home/elon/Desktop/Git/ReversiGame/client/cmake-build-debug/CMakeFiles/ReversiGame.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ReversiGame.dir/depend

