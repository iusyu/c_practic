# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.19

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
CMAKE_SOURCE_DIR = /home/ius/c_practic/gteste

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ius/c_practic/gteste

# Include any dependencies generated for this target.
include CMakeFiles/gt001.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/gt001.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/gt001.dir/flags.make

CMakeFiles/gt001.dir/gt001.cpp.o: CMakeFiles/gt001.dir/flags.make
CMakeFiles/gt001.dir/gt001.cpp.o: gt001.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ius/c_practic/gteste/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/gt001.dir/gt001.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/gt001.dir/gt001.cpp.o -c /home/ius/c_practic/gteste/gt001.cpp

CMakeFiles/gt001.dir/gt001.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gt001.dir/gt001.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ius/c_practic/gteste/gt001.cpp > CMakeFiles/gt001.dir/gt001.cpp.i

CMakeFiles/gt001.dir/gt001.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gt001.dir/gt001.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ius/c_practic/gteste/gt001.cpp -o CMakeFiles/gt001.dir/gt001.cpp.s

# Object files for target gt001
gt001_OBJECTS = \
"CMakeFiles/gt001.dir/gt001.cpp.o"

# External object files for target gt001
gt001_EXTERNAL_OBJECTS =

gt001: CMakeFiles/gt001.dir/gt001.cpp.o
gt001: CMakeFiles/gt001.dir/build.make
gt001: CMakeFiles/gt001.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ius/c_practic/gteste/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable gt001"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/gt001.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/gt001.dir/build: gt001

.PHONY : CMakeFiles/gt001.dir/build

CMakeFiles/gt001.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/gt001.dir/cmake_clean.cmake
.PHONY : CMakeFiles/gt001.dir/clean

CMakeFiles/gt001.dir/depend:
	cd /home/ius/c_practic/gteste && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ius/c_practic/gteste /home/ius/c_practic/gteste /home/ius/c_practic/gteste /home/ius/c_practic/gteste /home/ius/c_practic/gteste/CMakeFiles/gt001.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/gt001.dir/depend

