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
CMAKE_SOURCE_DIR = /home/elon/Desktop/Git/ReversiGame

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/elon/Desktop/Git/ReversiGame/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ReversTest.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ReversTest.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ReversTest.dir/flags.make

CMakeFiles/ReversTest.dir/tests/main_test.cpp.o: CMakeFiles/ReversTest.dir/flags.make
CMakeFiles/ReversTest.dir/tests/main_test.cpp.o: ../tests/main_test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/elon/Desktop/Git/ReversiGame/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ReversTest.dir/tests/main_test.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ReversTest.dir/tests/main_test.cpp.o -c /home/elon/Desktop/Git/ReversiGame/tests/main_test.cpp

CMakeFiles/ReversTest.dir/tests/main_test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ReversTest.dir/tests/main_test.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/elon/Desktop/Git/ReversiGame/tests/main_test.cpp > CMakeFiles/ReversTest.dir/tests/main_test.cpp.i

CMakeFiles/ReversTest.dir/tests/main_test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ReversTest.dir/tests/main_test.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/elon/Desktop/Git/ReversiGame/tests/main_test.cpp -o CMakeFiles/ReversTest.dir/tests/main_test.cpp.s

CMakeFiles/ReversTest.dir/tests/main_test.cpp.o.requires:

.PHONY : CMakeFiles/ReversTest.dir/tests/main_test.cpp.o.requires

CMakeFiles/ReversTest.dir/tests/main_test.cpp.o.provides: CMakeFiles/ReversTest.dir/tests/main_test.cpp.o.requires
	$(MAKE) -f CMakeFiles/ReversTest.dir/build.make CMakeFiles/ReversTest.dir/tests/main_test.cpp.o.provides.build
.PHONY : CMakeFiles/ReversTest.dir/tests/main_test.cpp.o.provides

CMakeFiles/ReversTest.dir/tests/main_test.cpp.o.provides.build: CMakeFiles/ReversTest.dir/tests/main_test.cpp.o


CMakeFiles/ReversTest.dir/AIPlayer.cpp.o: CMakeFiles/ReversTest.dir/flags.make
CMakeFiles/ReversTest.dir/AIPlayer.cpp.o: ../AIPlayer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/elon/Desktop/Git/ReversiGame/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/ReversTest.dir/AIPlayer.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ReversTest.dir/AIPlayer.cpp.o -c /home/elon/Desktop/Git/ReversiGame/AIPlayer.cpp

CMakeFiles/ReversTest.dir/AIPlayer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ReversTest.dir/AIPlayer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/elon/Desktop/Git/ReversiGame/AIPlayer.cpp > CMakeFiles/ReversTest.dir/AIPlayer.cpp.i

CMakeFiles/ReversTest.dir/AIPlayer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ReversTest.dir/AIPlayer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/elon/Desktop/Git/ReversiGame/AIPlayer.cpp -o CMakeFiles/ReversTest.dir/AIPlayer.cpp.s

CMakeFiles/ReversTest.dir/AIPlayer.cpp.o.requires:

.PHONY : CMakeFiles/ReversTest.dir/AIPlayer.cpp.o.requires

CMakeFiles/ReversTest.dir/AIPlayer.cpp.o.provides: CMakeFiles/ReversTest.dir/AIPlayer.cpp.o.requires
	$(MAKE) -f CMakeFiles/ReversTest.dir/build.make CMakeFiles/ReversTest.dir/AIPlayer.cpp.o.provides.build
.PHONY : CMakeFiles/ReversTest.dir/AIPlayer.cpp.o.provides

CMakeFiles/ReversTest.dir/AIPlayer.cpp.o.provides.build: CMakeFiles/ReversTest.dir/AIPlayer.cpp.o


CMakeFiles/ReversTest.dir/Board.cpp.o: CMakeFiles/ReversTest.dir/flags.make
CMakeFiles/ReversTest.dir/Board.cpp.o: ../Board.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/elon/Desktop/Git/ReversiGame/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/ReversTest.dir/Board.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ReversTest.dir/Board.cpp.o -c /home/elon/Desktop/Git/ReversiGame/Board.cpp

CMakeFiles/ReversTest.dir/Board.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ReversTest.dir/Board.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/elon/Desktop/Git/ReversiGame/Board.cpp > CMakeFiles/ReversTest.dir/Board.cpp.i

CMakeFiles/ReversTest.dir/Board.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ReversTest.dir/Board.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/elon/Desktop/Git/ReversiGame/Board.cpp -o CMakeFiles/ReversTest.dir/Board.cpp.s

CMakeFiles/ReversTest.dir/Board.cpp.o.requires:

.PHONY : CMakeFiles/ReversTest.dir/Board.cpp.o.requires

CMakeFiles/ReversTest.dir/Board.cpp.o.provides: CMakeFiles/ReversTest.dir/Board.cpp.o.requires
	$(MAKE) -f CMakeFiles/ReversTest.dir/build.make CMakeFiles/ReversTest.dir/Board.cpp.o.provides.build
.PHONY : CMakeFiles/ReversTest.dir/Board.cpp.o.provides

CMakeFiles/ReversTest.dir/Board.cpp.o.provides.build: CMakeFiles/ReversTest.dir/Board.cpp.o


CMakeFiles/ReversTest.dir/ConsolePlayer.cpp.o: CMakeFiles/ReversTest.dir/flags.make
CMakeFiles/ReversTest.dir/ConsolePlayer.cpp.o: ../ConsolePlayer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/elon/Desktop/Git/ReversiGame/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/ReversTest.dir/ConsolePlayer.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ReversTest.dir/ConsolePlayer.cpp.o -c /home/elon/Desktop/Git/ReversiGame/ConsolePlayer.cpp

CMakeFiles/ReversTest.dir/ConsolePlayer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ReversTest.dir/ConsolePlayer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/elon/Desktop/Git/ReversiGame/ConsolePlayer.cpp > CMakeFiles/ReversTest.dir/ConsolePlayer.cpp.i

CMakeFiles/ReversTest.dir/ConsolePlayer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ReversTest.dir/ConsolePlayer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/elon/Desktop/Git/ReversiGame/ConsolePlayer.cpp -o CMakeFiles/ReversTest.dir/ConsolePlayer.cpp.s

CMakeFiles/ReversTest.dir/ConsolePlayer.cpp.o.requires:

.PHONY : CMakeFiles/ReversTest.dir/ConsolePlayer.cpp.o.requires

CMakeFiles/ReversTest.dir/ConsolePlayer.cpp.o.provides: CMakeFiles/ReversTest.dir/ConsolePlayer.cpp.o.requires
	$(MAKE) -f CMakeFiles/ReversTest.dir/build.make CMakeFiles/ReversTest.dir/ConsolePlayer.cpp.o.provides.build
.PHONY : CMakeFiles/ReversTest.dir/ConsolePlayer.cpp.o.provides

CMakeFiles/ReversTest.dir/ConsolePlayer.cpp.o.provides.build: CMakeFiles/ReversTest.dir/ConsolePlayer.cpp.o


CMakeFiles/ReversTest.dir/Game.cpp.o: CMakeFiles/ReversTest.dir/flags.make
CMakeFiles/ReversTest.dir/Game.cpp.o: ../Game.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/elon/Desktop/Git/ReversiGame/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/ReversTest.dir/Game.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ReversTest.dir/Game.cpp.o -c /home/elon/Desktop/Git/ReversiGame/Game.cpp

CMakeFiles/ReversTest.dir/Game.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ReversTest.dir/Game.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/elon/Desktop/Git/ReversiGame/Game.cpp > CMakeFiles/ReversTest.dir/Game.cpp.i

CMakeFiles/ReversTest.dir/Game.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ReversTest.dir/Game.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/elon/Desktop/Git/ReversiGame/Game.cpp -o CMakeFiles/ReversTest.dir/Game.cpp.s

CMakeFiles/ReversTest.dir/Game.cpp.o.requires:

.PHONY : CMakeFiles/ReversTest.dir/Game.cpp.o.requires

CMakeFiles/ReversTest.dir/Game.cpp.o.provides: CMakeFiles/ReversTest.dir/Game.cpp.o.requires
	$(MAKE) -f CMakeFiles/ReversTest.dir/build.make CMakeFiles/ReversTest.dir/Game.cpp.o.provides.build
.PHONY : CMakeFiles/ReversTest.dir/Game.cpp.o.provides

CMakeFiles/ReversTest.dir/Game.cpp.o.provides.build: CMakeFiles/ReversTest.dir/Game.cpp.o


CMakeFiles/ReversTest.dir/Player.cpp.o: CMakeFiles/ReversTest.dir/flags.make
CMakeFiles/ReversTest.dir/Player.cpp.o: ../Player.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/elon/Desktop/Git/ReversiGame/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/ReversTest.dir/Player.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ReversTest.dir/Player.cpp.o -c /home/elon/Desktop/Git/ReversiGame/Player.cpp

CMakeFiles/ReversTest.dir/Player.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ReversTest.dir/Player.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/elon/Desktop/Git/ReversiGame/Player.cpp > CMakeFiles/ReversTest.dir/Player.cpp.i

CMakeFiles/ReversTest.dir/Player.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ReversTest.dir/Player.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/elon/Desktop/Git/ReversiGame/Player.cpp -o CMakeFiles/ReversTest.dir/Player.cpp.s

CMakeFiles/ReversTest.dir/Player.cpp.o.requires:

.PHONY : CMakeFiles/ReversTest.dir/Player.cpp.o.requires

CMakeFiles/ReversTest.dir/Player.cpp.o.provides: CMakeFiles/ReversTest.dir/Player.cpp.o.requires
	$(MAKE) -f CMakeFiles/ReversTest.dir/build.make CMakeFiles/ReversTest.dir/Player.cpp.o.provides.build
.PHONY : CMakeFiles/ReversTest.dir/Player.cpp.o.provides

CMakeFiles/ReversTest.dir/Player.cpp.o.provides.build: CMakeFiles/ReversTest.dir/Player.cpp.o


CMakeFiles/ReversTest.dir/Point.cpp.o: CMakeFiles/ReversTest.dir/flags.make
CMakeFiles/ReversTest.dir/Point.cpp.o: ../Point.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/elon/Desktop/Git/ReversiGame/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/ReversTest.dir/Point.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ReversTest.dir/Point.cpp.o -c /home/elon/Desktop/Git/ReversiGame/Point.cpp

CMakeFiles/ReversTest.dir/Point.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ReversTest.dir/Point.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/elon/Desktop/Git/ReversiGame/Point.cpp > CMakeFiles/ReversTest.dir/Point.cpp.i

CMakeFiles/ReversTest.dir/Point.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ReversTest.dir/Point.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/elon/Desktop/Git/ReversiGame/Point.cpp -o CMakeFiles/ReversTest.dir/Point.cpp.s

CMakeFiles/ReversTest.dir/Point.cpp.o.requires:

.PHONY : CMakeFiles/ReversTest.dir/Point.cpp.o.requires

CMakeFiles/ReversTest.dir/Point.cpp.o.provides: CMakeFiles/ReversTest.dir/Point.cpp.o.requires
	$(MAKE) -f CMakeFiles/ReversTest.dir/build.make CMakeFiles/ReversTest.dir/Point.cpp.o.provides.build
.PHONY : CMakeFiles/ReversTest.dir/Point.cpp.o.provides

CMakeFiles/ReversTest.dir/Point.cpp.o.provides.build: CMakeFiles/ReversTest.dir/Point.cpp.o


CMakeFiles/ReversTest.dir/RegularRules.cpp.o: CMakeFiles/ReversTest.dir/flags.make
CMakeFiles/ReversTest.dir/RegularRules.cpp.o: ../RegularRules.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/elon/Desktop/Git/ReversiGame/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/ReversTest.dir/RegularRules.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ReversTest.dir/RegularRules.cpp.o -c /home/elon/Desktop/Git/ReversiGame/RegularRules.cpp

CMakeFiles/ReversTest.dir/RegularRules.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ReversTest.dir/RegularRules.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/elon/Desktop/Git/ReversiGame/RegularRules.cpp > CMakeFiles/ReversTest.dir/RegularRules.cpp.i

CMakeFiles/ReversTest.dir/RegularRules.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ReversTest.dir/RegularRules.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/elon/Desktop/Git/ReversiGame/RegularRules.cpp -o CMakeFiles/ReversTest.dir/RegularRules.cpp.s

CMakeFiles/ReversTest.dir/RegularRules.cpp.o.requires:

.PHONY : CMakeFiles/ReversTest.dir/RegularRules.cpp.o.requires

CMakeFiles/ReversTest.dir/RegularRules.cpp.o.provides: CMakeFiles/ReversTest.dir/RegularRules.cpp.o.requires
	$(MAKE) -f CMakeFiles/ReversTest.dir/build.make CMakeFiles/ReversTest.dir/RegularRules.cpp.o.provides.build
.PHONY : CMakeFiles/ReversTest.dir/RegularRules.cpp.o.provides

CMakeFiles/ReversTest.dir/RegularRules.cpp.o.provides.build: CMakeFiles/ReversTest.dir/RegularRules.cpp.o


CMakeFiles/ReversTest.dir/Rules.cpp.o: CMakeFiles/ReversTest.dir/flags.make
CMakeFiles/ReversTest.dir/Rules.cpp.o: ../Rules.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/elon/Desktop/Git/ReversiGame/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/ReversTest.dir/Rules.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ReversTest.dir/Rules.cpp.o -c /home/elon/Desktop/Git/ReversiGame/Rules.cpp

CMakeFiles/ReversTest.dir/Rules.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ReversTest.dir/Rules.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/elon/Desktop/Git/ReversiGame/Rules.cpp > CMakeFiles/ReversTest.dir/Rules.cpp.i

CMakeFiles/ReversTest.dir/Rules.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ReversTest.dir/Rules.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/elon/Desktop/Git/ReversiGame/Rules.cpp -o CMakeFiles/ReversTest.dir/Rules.cpp.s

CMakeFiles/ReversTest.dir/Rules.cpp.o.requires:

.PHONY : CMakeFiles/ReversTest.dir/Rules.cpp.o.requires

CMakeFiles/ReversTest.dir/Rules.cpp.o.provides: CMakeFiles/ReversTest.dir/Rules.cpp.o.requires
	$(MAKE) -f CMakeFiles/ReversTest.dir/build.make CMakeFiles/ReversTest.dir/Rules.cpp.o.provides.build
.PHONY : CMakeFiles/ReversTest.dir/Rules.cpp.o.provides

CMakeFiles/ReversTest.dir/Rules.cpp.o.provides.build: CMakeFiles/ReversTest.dir/Rules.cpp.o


CMakeFiles/ReversTest.dir/GameMenu.cpp.o: CMakeFiles/ReversTest.dir/flags.make
CMakeFiles/ReversTest.dir/GameMenu.cpp.o: ../GameMenu.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/elon/Desktop/Git/ReversiGame/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/ReversTest.dir/GameMenu.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ReversTest.dir/GameMenu.cpp.o -c /home/elon/Desktop/Git/ReversiGame/GameMenu.cpp

CMakeFiles/ReversTest.dir/GameMenu.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ReversTest.dir/GameMenu.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/elon/Desktop/Git/ReversiGame/GameMenu.cpp > CMakeFiles/ReversTest.dir/GameMenu.cpp.i

CMakeFiles/ReversTest.dir/GameMenu.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ReversTest.dir/GameMenu.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/elon/Desktop/Git/ReversiGame/GameMenu.cpp -o CMakeFiles/ReversTest.dir/GameMenu.cpp.s

CMakeFiles/ReversTest.dir/GameMenu.cpp.o.requires:

.PHONY : CMakeFiles/ReversTest.dir/GameMenu.cpp.o.requires

CMakeFiles/ReversTest.dir/GameMenu.cpp.o.provides: CMakeFiles/ReversTest.dir/GameMenu.cpp.o.requires
	$(MAKE) -f CMakeFiles/ReversTest.dir/build.make CMakeFiles/ReversTest.dir/GameMenu.cpp.o.provides.build
.PHONY : CMakeFiles/ReversTest.dir/GameMenu.cpp.o.provides

CMakeFiles/ReversTest.dir/GameMenu.cpp.o.provides.build: CMakeFiles/ReversTest.dir/GameMenu.cpp.o


# Object files for target ReversTest
ReversTest_OBJECTS = \
"CMakeFiles/ReversTest.dir/tests/main_test.cpp.o" \
"CMakeFiles/ReversTest.dir/AIPlayer.cpp.o" \
"CMakeFiles/ReversTest.dir/Board.cpp.o" \
"CMakeFiles/ReversTest.dir/ConsolePlayer.cpp.o" \
"CMakeFiles/ReversTest.dir/Game.cpp.o" \
"CMakeFiles/ReversTest.dir/Player.cpp.o" \
"CMakeFiles/ReversTest.dir/Point.cpp.o" \
"CMakeFiles/ReversTest.dir/RegularRules.cpp.o" \
"CMakeFiles/ReversTest.dir/Rules.cpp.o" \
"CMakeFiles/ReversTest.dir/GameMenu.cpp.o"

# External object files for target ReversTest
ReversTest_EXTERNAL_OBJECTS =

ReversTest: CMakeFiles/ReversTest.dir/tests/main_test.cpp.o
ReversTest: CMakeFiles/ReversTest.dir/AIPlayer.cpp.o
ReversTest: CMakeFiles/ReversTest.dir/Board.cpp.o
ReversTest: CMakeFiles/ReversTest.dir/ConsolePlayer.cpp.o
ReversTest: CMakeFiles/ReversTest.dir/Game.cpp.o
ReversTest: CMakeFiles/ReversTest.dir/Player.cpp.o
ReversTest: CMakeFiles/ReversTest.dir/Point.cpp.o
ReversTest: CMakeFiles/ReversTest.dir/RegularRules.cpp.o
ReversTest: CMakeFiles/ReversTest.dir/Rules.cpp.o
ReversTest: CMakeFiles/ReversTest.dir/GameMenu.cpp.o
ReversTest: CMakeFiles/ReversTest.dir/build.make
ReversTest: CMakeFiles/ReversTest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/elon/Desktop/Git/ReversiGame/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Linking CXX executable ReversTest"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ReversTest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ReversTest.dir/build: ReversTest

.PHONY : CMakeFiles/ReversTest.dir/build

CMakeFiles/ReversTest.dir/requires: CMakeFiles/ReversTest.dir/tests/main_test.cpp.o.requires
CMakeFiles/ReversTest.dir/requires: CMakeFiles/ReversTest.dir/AIPlayer.cpp.o.requires
CMakeFiles/ReversTest.dir/requires: CMakeFiles/ReversTest.dir/Board.cpp.o.requires
CMakeFiles/ReversTest.dir/requires: CMakeFiles/ReversTest.dir/ConsolePlayer.cpp.o.requires
CMakeFiles/ReversTest.dir/requires: CMakeFiles/ReversTest.dir/Game.cpp.o.requires
CMakeFiles/ReversTest.dir/requires: CMakeFiles/ReversTest.dir/Player.cpp.o.requires
CMakeFiles/ReversTest.dir/requires: CMakeFiles/ReversTest.dir/Point.cpp.o.requires
CMakeFiles/ReversTest.dir/requires: CMakeFiles/ReversTest.dir/RegularRules.cpp.o.requires
CMakeFiles/ReversTest.dir/requires: CMakeFiles/ReversTest.dir/Rules.cpp.o.requires
CMakeFiles/ReversTest.dir/requires: CMakeFiles/ReversTest.dir/GameMenu.cpp.o.requires

.PHONY : CMakeFiles/ReversTest.dir/requires

CMakeFiles/ReversTest.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ReversTest.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ReversTest.dir/clean

CMakeFiles/ReversTest.dir/depend:
	cd /home/elon/Desktop/Git/ReversiGame/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/elon/Desktop/Git/ReversiGame /home/elon/Desktop/Git/ReversiGame /home/elon/Desktop/Git/ReversiGame/cmake-build-debug /home/elon/Desktop/Git/ReversiGame/cmake-build-debug /home/elon/Desktop/Git/ReversiGame/cmake-build-debug/CMakeFiles/ReversTest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ReversTest.dir/depend

