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
CMAKE_COMMAND = /home/linuxbrew/.linuxbrew/Cellar/cmake/3.19.1/bin/cmake

# The command to remove a file.
RM = /home/linuxbrew/.linuxbrew/Cellar/cmake/3.19.1/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/noisyboy/university/workshop/over_prime

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/noisyboy/university/workshop/over_prime/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/over_prime.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/over_prime.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/over_prime.dir/flags.make

CMakeFiles/over_prime.dir/main.c.o: CMakeFiles/over_prime.dir/flags.make
CMakeFiles/over_prime.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/noisyboy/university/workshop/over_prime/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/over_prime.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/over_prime.dir/main.c.o -c /home/noisyboy/university/workshop/over_prime/main.c

CMakeFiles/over_prime.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/over_prime.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/noisyboy/university/workshop/over_prime/main.c > CMakeFiles/over_prime.dir/main.c.i

CMakeFiles/over_prime.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/over_prime.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/noisyboy/university/workshop/over_prime/main.c -o CMakeFiles/over_prime.dir/main.c.s

# Object files for target over_prime
over_prime_OBJECTS = \
"CMakeFiles/over_prime.dir/main.c.o"

# External object files for target over_prime
over_prime_EXTERNAL_OBJECTS =

over_prime: CMakeFiles/over_prime.dir/main.c.o
over_prime: CMakeFiles/over_prime.dir/build.make
over_prime: CMakeFiles/over_prime.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/noisyboy/university/workshop/over_prime/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable over_prime"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/over_prime.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/over_prime.dir/build: over_prime

.PHONY : CMakeFiles/over_prime.dir/build

CMakeFiles/over_prime.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/over_prime.dir/cmake_clean.cmake
.PHONY : CMakeFiles/over_prime.dir/clean

CMakeFiles/over_prime.dir/depend:
	cd /home/noisyboy/university/workshop/over_prime/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/noisyboy/university/workshop/over_prime /home/noisyboy/university/workshop/over_prime /home/noisyboy/university/workshop/over_prime/cmake-build-debug /home/noisyboy/university/workshop/over_prime/cmake-build-debug /home/noisyboy/university/workshop/over_prime/cmake-build-debug/CMakeFiles/over_prime.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/over_prime.dir/depend

