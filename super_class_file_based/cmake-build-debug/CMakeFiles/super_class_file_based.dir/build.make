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
CMAKE_SOURCE_DIR = /home/noisyboy/university/workshop/super_class_file_based

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/noisyboy/university/workshop/super_class_file_based/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/super_class_file_based.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/super_class_file_based.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/super_class_file_based.dir/flags.make

CMakeFiles/super_class_file_based.dir/main.c.o: CMakeFiles/super_class_file_based.dir/flags.make
CMakeFiles/super_class_file_based.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/noisyboy/university/workshop/super_class_file_based/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/super_class_file_based.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/super_class_file_based.dir/main.c.o -c /home/noisyboy/university/workshop/super_class_file_based/main.c

CMakeFiles/super_class_file_based.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/super_class_file_based.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/noisyboy/university/workshop/super_class_file_based/main.c > CMakeFiles/super_class_file_based.dir/main.c.i

CMakeFiles/super_class_file_based.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/super_class_file_based.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/noisyboy/university/workshop/super_class_file_based/main.c -o CMakeFiles/super_class_file_based.dir/main.c.s

# Object files for target super_class_file_based
super_class_file_based_OBJECTS = \
"CMakeFiles/super_class_file_based.dir/main.c.o"

# External object files for target super_class_file_based
super_class_file_based_EXTERNAL_OBJECTS =

super_class_file_based: CMakeFiles/super_class_file_based.dir/main.c.o
super_class_file_based: CMakeFiles/super_class_file_based.dir/build.make
super_class_file_based: CMakeFiles/super_class_file_based.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/noisyboy/university/workshop/super_class_file_based/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable super_class_file_based"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/super_class_file_based.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/super_class_file_based.dir/build: super_class_file_based

.PHONY : CMakeFiles/super_class_file_based.dir/build

CMakeFiles/super_class_file_based.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/super_class_file_based.dir/cmake_clean.cmake
.PHONY : CMakeFiles/super_class_file_based.dir/clean

CMakeFiles/super_class_file_based.dir/depend:
	cd /home/noisyboy/university/workshop/super_class_file_based/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/noisyboy/university/workshop/super_class_file_based /home/noisyboy/university/workshop/super_class_file_based /home/noisyboy/university/workshop/super_class_file_based/cmake-build-debug /home/noisyboy/university/workshop/super_class_file_based/cmake-build-debug /home/noisyboy/university/workshop/super_class_file_based/cmake-build-debug/CMakeFiles/super_class_file_based.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/super_class_file_based.dir/depend

