# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/blackreaper/Documents/6th Sem/LBP/Shell/libzip-1.7.3"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/blackreaper/Documents/6th Sem/LBP/Shell/libzip-1.7.3/build"

# Include any dependencies generated for this target.
include examples/CMakeFiles/in-memory.dir/depend.make

# Include the progress variables for this target.
include examples/CMakeFiles/in-memory.dir/progress.make

# Include the compile flags for this target's objects.
include examples/CMakeFiles/in-memory.dir/flags.make

examples/CMakeFiles/in-memory.dir/in-memory.c.o: examples/CMakeFiles/in-memory.dir/flags.make
examples/CMakeFiles/in-memory.dir/in-memory.c.o: ../examples/in-memory.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/blackreaper/Documents/6th Sem/LBP/Shell/libzip-1.7.3/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object examples/CMakeFiles/in-memory.dir/in-memory.c.o"
	cd "/home/blackreaper/Documents/6th Sem/LBP/Shell/libzip-1.7.3/build/examples" && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/in-memory.dir/in-memory.c.o   -c "/home/blackreaper/Documents/6th Sem/LBP/Shell/libzip-1.7.3/examples/in-memory.c"

examples/CMakeFiles/in-memory.dir/in-memory.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/in-memory.dir/in-memory.c.i"
	cd "/home/blackreaper/Documents/6th Sem/LBP/Shell/libzip-1.7.3/build/examples" && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/home/blackreaper/Documents/6th Sem/LBP/Shell/libzip-1.7.3/examples/in-memory.c" > CMakeFiles/in-memory.dir/in-memory.c.i

examples/CMakeFiles/in-memory.dir/in-memory.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/in-memory.dir/in-memory.c.s"
	cd "/home/blackreaper/Documents/6th Sem/LBP/Shell/libzip-1.7.3/build/examples" && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/home/blackreaper/Documents/6th Sem/LBP/Shell/libzip-1.7.3/examples/in-memory.c" -o CMakeFiles/in-memory.dir/in-memory.c.s

# Object files for target in-memory
in__memory_OBJECTS = \
"CMakeFiles/in-memory.dir/in-memory.c.o"

# External object files for target in-memory
in__memory_EXTERNAL_OBJECTS =

examples/in-memory: examples/CMakeFiles/in-memory.dir/in-memory.c.o
examples/in-memory: examples/CMakeFiles/in-memory.dir/build.make
examples/in-memory: lib/libzip.so.5.3
examples/in-memory: examples/CMakeFiles/in-memory.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/blackreaper/Documents/6th Sem/LBP/Shell/libzip-1.7.3/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable in-memory"
	cd "/home/blackreaper/Documents/6th Sem/LBP/Shell/libzip-1.7.3/build/examples" && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/in-memory.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
examples/CMakeFiles/in-memory.dir/build: examples/in-memory

.PHONY : examples/CMakeFiles/in-memory.dir/build

examples/CMakeFiles/in-memory.dir/clean:
	cd "/home/blackreaper/Documents/6th Sem/LBP/Shell/libzip-1.7.3/build/examples" && $(CMAKE_COMMAND) -P CMakeFiles/in-memory.dir/cmake_clean.cmake
.PHONY : examples/CMakeFiles/in-memory.dir/clean

examples/CMakeFiles/in-memory.dir/depend:
	cd "/home/blackreaper/Documents/6th Sem/LBP/Shell/libzip-1.7.3/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/blackreaper/Documents/6th Sem/LBP/Shell/libzip-1.7.3" "/home/blackreaper/Documents/6th Sem/LBP/Shell/libzip-1.7.3/examples" "/home/blackreaper/Documents/6th Sem/LBP/Shell/libzip-1.7.3/build" "/home/blackreaper/Documents/6th Sem/LBP/Shell/libzip-1.7.3/build/examples" "/home/blackreaper/Documents/6th Sem/LBP/Shell/libzip-1.7.3/build/examples/CMakeFiles/in-memory.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : examples/CMakeFiles/in-memory.dir/depend
