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
CMAKE_SOURCE_DIR = /home/noisyboy/university/sandbox

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/noisyboy/university/sandbox/build

# Include any dependencies generated for this target.
include CMakeFiles/sandbox.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/sandbox.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/sandbox.dir/flags.make

CMakeFiles/sandbox.dir/main.c.o: CMakeFiles/sandbox.dir/flags.make
CMakeFiles/sandbox.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/noisyboy/university/sandbox/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/sandbox.dir/main.c.o"
	/bin/clang-10 $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/sandbox.dir/main.c.o -c /home/noisyboy/university/sandbox/main.c

CMakeFiles/sandbox.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/sandbox.dir/main.c.i"
	/bin/clang-10 $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/noisyboy/university/sandbox/main.c > CMakeFiles/sandbox.dir/main.c.i

CMakeFiles/sandbox.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/sandbox.dir/main.c.s"
	/bin/clang-10 $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/noisyboy/university/sandbox/main.c -o CMakeFiles/sandbox.dir/main.c.s

# Object files for target sandbox
sandbox_OBJECTS = \
"CMakeFiles/sandbox.dir/main.c.o"

# External object files for target sandbox
sandbox_EXTERNAL_OBJECTS =

sandbox: CMakeFiles/sandbox.dir/main.c.o
sandbox: CMakeFiles/sandbox.dir/build.make
sandbox: CMakeFiles/sandbox.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/noisyboy/university/sandbox/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable sandbox"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/sandbox.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/sandbox.dir/build: sandbox

.PHONY : CMakeFiles/sandbox.dir/build

CMakeFiles/sandbox.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/sandbox.dir/cmake_clean.cmake
.PHONY : CMakeFiles/sandbox.dir/clean

CMakeFiles/sandbox.dir/depend:
	cd /home/noisyboy/university/sandbox/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/noisyboy/university/sandbox /home/noisyboy/university/sandbox /home/noisyboy/university/sandbox/build /home/noisyboy/university/sandbox/build /home/noisyboy/university/sandbox/build/CMakeFiles/sandbox.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/sandbox.dir/depend
