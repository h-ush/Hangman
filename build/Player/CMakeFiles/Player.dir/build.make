# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/hush/pcp/C++/projects/hangman

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/hush/pcp/C++/projects/hangman/build

# Include any dependencies generated for this target.
include Player/CMakeFiles/Player.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include Player/CMakeFiles/Player.dir/compiler_depend.make

# Include the progress variables for this target.
include Player/CMakeFiles/Player.dir/progress.make

# Include the compile flags for this target's objects.
include Player/CMakeFiles/Player.dir/flags.make

Player/CMakeFiles/Player.dir/src/player.cpp.o: Player/CMakeFiles/Player.dir/flags.make
Player/CMakeFiles/Player.dir/src/player.cpp.o: /home/hush/pcp/C++/projects/hangman/Player/src/player.cpp
Player/CMakeFiles/Player.dir/src/player.cpp.o: Player/CMakeFiles/Player.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/hush/pcp/C++/projects/hangman/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Player/CMakeFiles/Player.dir/src/player.cpp.o"
	cd /home/hush/pcp/C++/projects/hangman/build/Player && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Player/CMakeFiles/Player.dir/src/player.cpp.o -MF CMakeFiles/Player.dir/src/player.cpp.o.d -o CMakeFiles/Player.dir/src/player.cpp.o -c /home/hush/pcp/C++/projects/hangman/Player/src/player.cpp

Player/CMakeFiles/Player.dir/src/player.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Player.dir/src/player.cpp.i"
	cd /home/hush/pcp/C++/projects/hangman/build/Player && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/hush/pcp/C++/projects/hangman/Player/src/player.cpp > CMakeFiles/Player.dir/src/player.cpp.i

Player/CMakeFiles/Player.dir/src/player.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Player.dir/src/player.cpp.s"
	cd /home/hush/pcp/C++/projects/hangman/build/Player && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/hush/pcp/C++/projects/hangman/Player/src/player.cpp -o CMakeFiles/Player.dir/src/player.cpp.s

# Object files for target Player
Player_OBJECTS = \
"CMakeFiles/Player.dir/src/player.cpp.o"

# External object files for target Player
Player_EXTERNAL_OBJECTS =

Player/libPlayer.a: Player/CMakeFiles/Player.dir/src/player.cpp.o
Player/libPlayer.a: Player/CMakeFiles/Player.dir/build.make
Player/libPlayer.a: Player/CMakeFiles/Player.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/hush/pcp/C++/projects/hangman/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libPlayer.a"
	cd /home/hush/pcp/C++/projects/hangman/build/Player && $(CMAKE_COMMAND) -P CMakeFiles/Player.dir/cmake_clean_target.cmake
	cd /home/hush/pcp/C++/projects/hangman/build/Player && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Player.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Player/CMakeFiles/Player.dir/build: Player/libPlayer.a
.PHONY : Player/CMakeFiles/Player.dir/build

Player/CMakeFiles/Player.dir/clean:
	cd /home/hush/pcp/C++/projects/hangman/build/Player && $(CMAKE_COMMAND) -P CMakeFiles/Player.dir/cmake_clean.cmake
.PHONY : Player/CMakeFiles/Player.dir/clean

Player/CMakeFiles/Player.dir/depend:
	cd /home/hush/pcp/C++/projects/hangman/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/hush/pcp/C++/projects/hangman /home/hush/pcp/C++/projects/hangman/Player /home/hush/pcp/C++/projects/hangman/build /home/hush/pcp/C++/projects/hangman/build/Player /home/hush/pcp/C++/projects/hangman/build/Player/CMakeFiles/Player.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : Player/CMakeFiles/Player.dir/depend

