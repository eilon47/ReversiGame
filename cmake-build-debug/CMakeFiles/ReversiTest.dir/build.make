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
include CMakeFiles/ReversiTest.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ReversiTest.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ReversiTest.dir/flags.make

CMakeFiles/ReversiTest.dir/tests/main_test.cpp.o: CMakeFiles/ReversiTest.dir/flags.make
CMakeFiles/ReversiTest.dir/tests/main_test.cpp.o: ../tests/main_test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/elon/Desktop/Git/ReversiGame/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ReversiTest.dir/tests/main_test.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ReversiTest.dir/tests/main_test.cpp.o -c /home/elon/Desktop/Git/ReversiGame/tests/main_test.cpp

CMakeFiles/ReversiTest.dir/tests/main_test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ReversiTest.dir/tests/main_test.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/elon/Desktop/Git/ReversiGame/tests/main_test.cpp > CMakeFiles/ReversiTest.dir/tests/main_test.cpp.i

CMakeFiles/ReversiTest.dir/tests/main_test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ReversiTest.dir/tests/main_test.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/elon/Desktop/Git/ReversiGame/tests/main_test.cpp -o CMakeFiles/ReversiTest.dir/tests/main_test.cpp.s

CMakeFiles/ReversiTest.dir/tests/main_test.cpp.o.requires:

.PHONY : CMakeFiles/ReversiTest.dir/tests/main_test.cpp.o.requires

CMakeFiles/ReversiTest.dir/tests/main_test.cpp.o.provides: CMakeFiles/ReversiTest.dir/tests/main_test.cpp.o.requires
	$(MAKE) -f CMakeFiles/ReversiTest.dir/build.make CMakeFiles/ReversiTest.dir/tests/main_test.cpp.o.provides.build
.PHONY : CMakeFiles/ReversiTest.dir/tests/main_test.cpp.o.provides

CMakeFiles/ReversiTest.dir/tests/main_test.cpp.o.provides.build: CMakeFiles/ReversiTest.dir/tests/main_test.cpp.o


CMakeFiles/ReversiTest.dir/AIPlayer.cpp.o: CMakeFiles/ReversiTest.dir/flags.make
CMakeFiles/ReversiTest.dir/AIPlayer.cpp.o: ../AIPlayer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/elon/Desktop/Git/ReversiGame/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/ReversiTest.dir/AIPlayer.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ReversiTest.dir/AIPlayer.cpp.o -c /home/elon/Desktop/Git/ReversiGame/AIPlayer.cpp

CMakeFiles/ReversiTest.dir/AIPlayer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ReversiTest.dir/AIPlayer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/elon/Desktop/Git/ReversiGame/AIPlayer.cpp > CMakeFiles/ReversiTest.dir/AIPlayer.cpp.i

CMakeFiles/ReversiTest.dir/AIPlayer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ReversiTest.dir/AIPlayer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/elon/Desktop/Git/ReversiGame/AIPlayer.cpp -o CMakeFiles/ReversiTest.dir/AIPlayer.cpp.s

CMakeFiles/ReversiTest.dir/AIPlayer.cpp.o.requires:

.PHONY : CMakeFiles/ReversiTest.dir/AIPlayer.cpp.o.requires

CMakeFiles/ReversiTest.dir/AIPlayer.cpp.o.provides: CMakeFiles/ReversiTest.dir/AIPlayer.cpp.o.requires
	$(MAKE) -f CMakeFiles/ReversiTest.dir/build.make CMakeFiles/ReversiTest.dir/AIPlayer.cpp.o.provides.build
.PHONY : CMakeFiles/ReversiTest.dir/AIPlayer.cpp.o.provides

CMakeFiles/ReversiTest.dir/AIPlayer.cpp.o.provides.build: CMakeFiles/ReversiTest.dir/AIPlayer.cpp.o


CMakeFiles/ReversiTest.dir/Board.cpp.o: CMakeFiles/ReversiTest.dir/flags.make
CMakeFiles/ReversiTest.dir/Board.cpp.o: ../Board.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/elon/Desktop/Git/ReversiGame/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/ReversiTest.dir/Board.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ReversiTest.dir/Board.cpp.o -c /home/elon/Desktop/Git/ReversiGame/Board.cpp

CMakeFiles/ReversiTest.dir/Board.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ReversiTest.dir/Board.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/elon/Desktop/Git/ReversiGame/Board.cpp > CMakeFiles/ReversiTest.dir/Board.cpp.i

CMakeFiles/ReversiTest.dir/Board.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ReversiTest.dir/Board.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/elon/Desktop/Git/ReversiGame/Board.cpp -o CMakeFiles/ReversiTest.dir/Board.cpp.s

CMakeFiles/ReversiTest.dir/Board.cpp.o.requires:

.PHONY : CMakeFiles/ReversiTest.dir/Board.cpp.o.requires

CMakeFiles/ReversiTest.dir/Board.cpp.o.provides: CMakeFiles/ReversiTest.dir/Board.cpp.o.requires
	$(MAKE) -f CMakeFiles/ReversiTest.dir/build.make CMakeFiles/ReversiTest.dir/Board.cpp.o.provides.build
.PHONY : CMakeFiles/ReversiTest.dir/Board.cpp.o.provides

CMakeFiles/ReversiTest.dir/Board.cpp.o.provides.build: CMakeFiles/ReversiTest.dir/Board.cpp.o


CMakeFiles/ReversiTest.dir/ConsolePlayer.cpp.o: CMakeFiles/ReversiTest.dir/flags.make
CMakeFiles/ReversiTest.dir/ConsolePlayer.cpp.o: ../ConsolePlayer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/elon/Desktop/Git/ReversiGame/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/ReversiTest.dir/ConsolePlayer.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ReversiTest.dir/ConsolePlayer.cpp.o -c /home/elon/Desktop/Git/ReversiGame/ConsolePlayer.cpp

CMakeFiles/ReversiTest.dir/ConsolePlayer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ReversiTest.dir/ConsolePlayer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/elon/Desktop/Git/ReversiGame/ConsolePlayer.cpp > CMakeFiles/ReversiTest.dir/ConsolePlayer.cpp.i

CMakeFiles/ReversiTest.dir/ConsolePlayer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ReversiTest.dir/ConsolePlayer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/elon/Desktop/Git/ReversiGame/ConsolePlayer.cpp -o CMakeFiles/ReversiTest.dir/ConsolePlayer.cpp.s

CMakeFiles/ReversiTest.dir/ConsolePlayer.cpp.o.requires:

.PHONY : CMakeFiles/ReversiTest.dir/ConsolePlayer.cpp.o.requires

CMakeFiles/ReversiTest.dir/ConsolePlayer.cpp.o.provides: CMakeFiles/ReversiTest.dir/ConsolePlayer.cpp.o.requires
	$(MAKE) -f CMakeFiles/ReversiTest.dir/build.make CMakeFiles/ReversiTest.dir/ConsolePlayer.cpp.o.provides.build
.PHONY : CMakeFiles/ReversiTest.dir/ConsolePlayer.cpp.o.provides

CMakeFiles/ReversiTest.dir/ConsolePlayer.cpp.o.provides.build: CMakeFiles/ReversiTest.dir/ConsolePlayer.cpp.o


CMakeFiles/ReversiTest.dir/Game.cpp.o: CMakeFiles/ReversiTest.dir/flags.make
CMakeFiles/ReversiTest.dir/Game.cpp.o: ../Game.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/elon/Desktop/Git/ReversiGame/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/ReversiTest.dir/Game.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ReversiTest.dir/Game.cpp.o -c /home/elon/Desktop/Git/ReversiGame/Game.cpp

CMakeFiles/ReversiTest.dir/Game.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ReversiTest.dir/Game.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/elon/Desktop/Git/ReversiGame/Game.cpp > CMakeFiles/ReversiTest.dir/Game.cpp.i

CMakeFiles/ReversiTest.dir/Game.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ReversiTest.dir/Game.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/elon/Desktop/Git/ReversiGame/Game.cpp -o CMakeFiles/ReversiTest.dir/Game.cpp.s

CMakeFiles/ReversiTest.dir/Game.cpp.o.requires:

.PHONY : CMakeFiles/ReversiTest.dir/Game.cpp.o.requires

CMakeFiles/ReversiTest.dir/Game.cpp.o.provides: CMakeFiles/ReversiTest.dir/Game.cpp.o.requires
	$(MAKE) -f CMakeFiles/ReversiTest.dir/build.make CMakeFiles/ReversiTest.dir/Game.cpp.o.provides.build
.PHONY : CMakeFiles/ReversiTest.dir/Game.cpp.o.provides

CMakeFiles/ReversiTest.dir/Game.cpp.o.provides.build: CMakeFiles/ReversiTest.dir/Game.cpp.o


CMakeFiles/ReversiTest.dir/Player.cpp.o: CMakeFiles/ReversiTest.dir/flags.make
CMakeFiles/ReversiTest.dir/Player.cpp.o: ../Player.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/elon/Desktop/Git/ReversiGame/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/ReversiTest.dir/Player.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ReversiTest.dir/Player.cpp.o -c /home/elon/Desktop/Git/ReversiGame/Player.cpp

CMakeFiles/ReversiTest.dir/Player.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ReversiTest.dir/Player.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/elon/Desktop/Git/ReversiGame/Player.cpp > CMakeFiles/ReversiTest.dir/Player.cpp.i

CMakeFiles/ReversiTest.dir/Player.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ReversiTest.dir/Player.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/elon/Desktop/Git/ReversiGame/Player.cpp -o CMakeFiles/ReversiTest.dir/Player.cpp.s

CMakeFiles/ReversiTest.dir/Player.cpp.o.requires:

.PHONY : CMakeFiles/ReversiTest.dir/Player.cpp.o.requires

CMakeFiles/ReversiTest.dir/Player.cpp.o.provides: CMakeFiles/ReversiTest.dir/Player.cpp.o.requires
	$(MAKE) -f CMakeFiles/ReversiTest.dir/build.make CMakeFiles/ReversiTest.dir/Player.cpp.o.provides.build
.PHONY : CMakeFiles/ReversiTest.dir/Player.cpp.o.provides

CMakeFiles/ReversiTest.dir/Player.cpp.o.provides.build: CMakeFiles/ReversiTest.dir/Player.cpp.o


CMakeFiles/ReversiTest.dir/Point.cpp.o: CMakeFiles/ReversiTest.dir/flags.make
CMakeFiles/ReversiTest.dir/Point.cpp.o: ../Point.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/elon/Desktop/Git/ReversiGame/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/ReversiTest.dir/Point.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ReversiTest.dir/Point.cpp.o -c /home/elon/Desktop/Git/ReversiGame/Point.cpp

CMakeFiles/ReversiTest.dir/Point.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ReversiTest.dir/Point.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/elon/Desktop/Git/ReversiGame/Point.cpp > CMakeFiles/ReversiTest.dir/Point.cpp.i

CMakeFiles/ReversiTest.dir/Point.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ReversiTest.dir/Point.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/elon/Desktop/Git/ReversiGame/Point.cpp -o CMakeFiles/ReversiTest.dir/Point.cpp.s

CMakeFiles/ReversiTest.dir/Point.cpp.o.requires:

.PHONY : CMakeFiles/ReversiTest.dir/Point.cpp.o.requires

CMakeFiles/ReversiTest.dir/Point.cpp.o.provides: CMakeFiles/ReversiTest.dir/Point.cpp.o.requires
	$(MAKE) -f CMakeFiles/ReversiTest.dir/build.make CMakeFiles/ReversiTest.dir/Point.cpp.o.provides.build
.PHONY : CMakeFiles/ReversiTest.dir/Point.cpp.o.provides

CMakeFiles/ReversiTest.dir/Point.cpp.o.provides.build: CMakeFiles/ReversiTest.dir/Point.cpp.o


CMakeFiles/ReversiTest.dir/RegularRules.cpp.o: CMakeFiles/ReversiTest.dir/flags.make
CMakeFiles/ReversiTest.dir/RegularRules.cpp.o: ../RegularRules.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/elon/Desktop/Git/ReversiGame/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/ReversiTest.dir/RegularRules.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ReversiTest.dir/RegularRules.cpp.o -c /home/elon/Desktop/Git/ReversiGame/RegularRules.cpp

CMakeFiles/ReversiTest.dir/RegularRules.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ReversiTest.dir/RegularRules.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/elon/Desktop/Git/ReversiGame/RegularRules.cpp > CMakeFiles/ReversiTest.dir/RegularRules.cpp.i

CMakeFiles/ReversiTest.dir/RegularRules.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ReversiTest.dir/RegularRules.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/elon/Desktop/Git/ReversiGame/RegularRules.cpp -o CMakeFiles/ReversiTest.dir/RegularRules.cpp.s

CMakeFiles/ReversiTest.dir/RegularRules.cpp.o.requires:

.PHONY : CMakeFiles/ReversiTest.dir/RegularRules.cpp.o.requires

CMakeFiles/ReversiTest.dir/RegularRules.cpp.o.provides: CMakeFiles/ReversiTest.dir/RegularRules.cpp.o.requires
	$(MAKE) -f CMakeFiles/ReversiTest.dir/build.make CMakeFiles/ReversiTest.dir/RegularRules.cpp.o.provides.build
.PHONY : CMakeFiles/ReversiTest.dir/RegularRules.cpp.o.provides

CMakeFiles/ReversiTest.dir/RegularRules.cpp.o.provides.build: CMakeFiles/ReversiTest.dir/RegularRules.cpp.o


CMakeFiles/ReversiTest.dir/Rules.cpp.o: CMakeFiles/ReversiTest.dir/flags.make
CMakeFiles/ReversiTest.dir/Rules.cpp.o: ../Rules.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/elon/Desktop/Git/ReversiGame/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/ReversiTest.dir/Rules.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ReversiTest.dir/Rules.cpp.o -c /home/elon/Desktop/Git/ReversiGame/Rules.cpp

CMakeFiles/ReversiTest.dir/Rules.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ReversiTest.dir/Rules.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/elon/Desktop/Git/ReversiGame/Rules.cpp > CMakeFiles/ReversiTest.dir/Rules.cpp.i

CMakeFiles/ReversiTest.dir/Rules.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ReversiTest.dir/Rules.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/elon/Desktop/Git/ReversiGame/Rules.cpp -o CMakeFiles/ReversiTest.dir/Rules.cpp.s

CMakeFiles/ReversiTest.dir/Rules.cpp.o.requires:

.PHONY : CMakeFiles/ReversiTest.dir/Rules.cpp.o.requires

CMakeFiles/ReversiTest.dir/Rules.cpp.o.provides: CMakeFiles/ReversiTest.dir/Rules.cpp.o.requires
	$(MAKE) -f CMakeFiles/ReversiTest.dir/build.make CMakeFiles/ReversiTest.dir/Rules.cpp.o.provides.build
.PHONY : CMakeFiles/ReversiTest.dir/Rules.cpp.o.provides

CMakeFiles/ReversiTest.dir/Rules.cpp.o.provides.build: CMakeFiles/ReversiTest.dir/Rules.cpp.o


CMakeFiles/ReversiTest.dir/GameMenu.cpp.o: CMakeFiles/ReversiTest.dir/flags.make
CMakeFiles/ReversiTest.dir/GameMenu.cpp.o: ../GameMenu.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/elon/Desktop/Git/ReversiGame/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/ReversiTest.dir/GameMenu.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ReversiTest.dir/GameMenu.cpp.o -c /home/elon/Desktop/Git/ReversiGame/GameMenu.cpp

CMakeFiles/ReversiTest.dir/GameMenu.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ReversiTest.dir/GameMenu.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/elon/Desktop/Git/ReversiGame/GameMenu.cpp > CMakeFiles/ReversiTest.dir/GameMenu.cpp.i

CMakeFiles/ReversiTest.dir/GameMenu.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ReversiTest.dir/GameMenu.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/elon/Desktop/Git/ReversiGame/GameMenu.cpp -o CMakeFiles/ReversiTest.dir/GameMenu.cpp.s

CMakeFiles/ReversiTest.dir/GameMenu.cpp.o.requires:

.PHONY : CMakeFiles/ReversiTest.dir/GameMenu.cpp.o.requires

CMakeFiles/ReversiTest.dir/GameMenu.cpp.o.provides: CMakeFiles/ReversiTest.dir/GameMenu.cpp.o.requires
	$(MAKE) -f CMakeFiles/ReversiTest.dir/build.make CMakeFiles/ReversiTest.dir/GameMenu.cpp.o.provides.build
.PHONY : CMakeFiles/ReversiTest.dir/GameMenu.cpp.o.provides

CMakeFiles/ReversiTest.dir/GameMenu.cpp.o.provides.build: CMakeFiles/ReversiTest.dir/GameMenu.cpp.o


# Object files for target ReversiTest
ReversiTest_OBJECTS = \
"CMakeFiles/ReversiTest.dir/tests/main_test.cpp.o" \
"CMakeFiles/ReversiTest.dir/AIPlayer.cpp.o" \
"CMakeFiles/ReversiTest.dir/Board.cpp.o" \
"CMakeFiles/ReversiTest.dir/ConsolePlayer.cpp.o" \
"CMakeFiles/ReversiTest.dir/Game.cpp.o" \
"CMakeFiles/ReversiTest.dir/Player.cpp.o" \
"CMakeFiles/ReversiTest.dir/Point.cpp.o" \
"CMakeFiles/ReversiTest.dir/RegularRules.cpp.o" \
"CMakeFiles/ReversiTest.dir/Rules.cpp.o" \
"CMakeFiles/ReversiTest.dir/GameMenu.cpp.o"

# External object files for target ReversiTest
ReversiTest_EXTERNAL_OBJECTS =

ReversiTest: CMakeFiles/ReversiTest.dir/tests/main_test.cpp.o
ReversiTest: CMakeFiles/ReversiTest.dir/AIPlayer.cpp.o
ReversiTest: CMakeFiles/ReversiTest.dir/Board.cpp.o
ReversiTest: CMakeFiles/ReversiTest.dir/ConsolePlayer.cpp.o
ReversiTest: CMakeFiles/ReversiTest.dir/Game.cpp.o
ReversiTest: CMakeFiles/ReversiTest.dir/Player.cpp.o
ReversiTest: CMakeFiles/ReversiTest.dir/Point.cpp.o
ReversiTest: CMakeFiles/ReversiTest.dir/RegularRules.cpp.o
ReversiTest: CMakeFiles/ReversiTest.dir/Rules.cpp.o
ReversiTest: CMakeFiles/ReversiTest.dir/GameMenu.cpp.o
ReversiTest: CMakeFiles/ReversiTest.dir/build.make
ReversiTest: lib/googletest-master/googlemock/gtest/libgtestd.a
ReversiTest: lib/googletest-master/googlemock/gtest/libgtest_maind.a
ReversiTest: lib/googletest-master/googlemock/gtest/libgtestd.a
ReversiTest: CMakeFiles/ReversiTest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/elon/Desktop/Git/ReversiGame/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Linking CXX executable ReversiTest"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ReversiTest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ReversiTest.dir/build: ReversiTest

.PHONY : CMakeFiles/ReversiTest.dir/build

CMakeFiles/ReversiTest.dir/requires: CMakeFiles/ReversiTest.dir/tests/main_test.cpp.o.requires
CMakeFiles/ReversiTest.dir/requires: CMakeFiles/ReversiTest.dir/AIPlayer.cpp.o.requires
CMakeFiles/ReversiTest.dir/requires: CMakeFiles/ReversiTest.dir/Board.cpp.o.requires
CMakeFiles/ReversiTest.dir/requires: CMakeFiles/ReversiTest.dir/ConsolePlayer.cpp.o.requires
CMakeFiles/ReversiTest.dir/requires: CMakeFiles/ReversiTest.dir/Game.cpp.o.requires
CMakeFiles/ReversiTest.dir/requires: CMakeFiles/ReversiTest.dir/Player.cpp.o.requires
CMakeFiles/ReversiTest.dir/requires: CMakeFiles/ReversiTest.dir/Point.cpp.o.requires
CMakeFiles/ReversiTest.dir/requires: CMakeFiles/ReversiTest.dir/RegularRules.cpp.o.requires
CMakeFiles/ReversiTest.dir/requires: CMakeFiles/ReversiTest.dir/Rules.cpp.o.requires
CMakeFiles/ReversiTest.dir/requires: CMakeFiles/ReversiTest.dir/GameMenu.cpp.o.requires

.PHONY : CMakeFiles/ReversiTest.dir/requires

CMakeFiles/ReversiTest.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ReversiTest.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ReversiTest.dir/clean

CMakeFiles/ReversiTest.dir/depend:
	cd /home/elon/Desktop/Git/ReversiGame/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/elon/Desktop/Git/ReversiGame /home/elon/Desktop/Git/ReversiGame /home/elon/Desktop/Git/ReversiGame/cmake-build-debug /home/elon/Desktop/Git/ReversiGame/cmake-build-debug /home/elon/Desktop/Git/ReversiGame/cmake-build-debug/CMakeFiles/ReversiTest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ReversiTest.dir/depend

