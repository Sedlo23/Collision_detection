# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = /opt/clion/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /opt/clion/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/jfs/CLionProjects/Csem

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jfs/CLionProjects/Csem/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Csem.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Csem.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Csem.dir/flags.make

CMakeFiles/Csem.dir/main.c.o: CMakeFiles/Csem.dir/flags.make
CMakeFiles/Csem.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jfs/CLionProjects/Csem/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Csem.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Csem.dir/main.c.o   -c /home/jfs/CLionProjects/Csem/main.c

CMakeFiles/Csem.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Csem.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/jfs/CLionProjects/Csem/main.c > CMakeFiles/Csem.dir/main.c.i

CMakeFiles/Csem.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Csem.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/jfs/CLionProjects/Csem/main.c -o CMakeFiles/Csem.dir/main.c.s

# Object files for target Csem
Csem_OBJECTS = \
"CMakeFiles/Csem.dir/main.c.o"

# External object files for target Csem
Csem_EXTERNAL_OBJECTS =

Csem: CMakeFiles/Csem.dir/main.c.o
Csem: CMakeFiles/Csem.dir/build.make
Csem: CMakeFiles/Csem.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/jfs/CLionProjects/Csem/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Csem"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Csem.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Csem.dir/build: Csem

.PHONY : CMakeFiles/Csem.dir/build

CMakeFiles/Csem.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Csem.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Csem.dir/clean

CMakeFiles/Csem.dir/depend:
	cd /home/jfs/CLionProjects/Csem/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jfs/CLionProjects/Csem /home/jfs/CLionProjects/Csem /home/jfs/CLionProjects/Csem/cmake-build-debug /home/jfs/CLionProjects/Csem/cmake-build-debug /home/jfs/CLionProjects/Csem/cmake-build-debug/CMakeFiles/Csem.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Csem.dir/depend

