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
include regress/CMakeFiles/tryopen.dir/depend.make

# Include the progress variables for this target.
include regress/CMakeFiles/tryopen.dir/progress.make

# Include the compile flags for this target's objects.
include regress/CMakeFiles/tryopen.dir/flags.make

regress/CMakeFiles/tryopen.dir/tryopen.c.o: regress/CMakeFiles/tryopen.dir/flags.make
regress/CMakeFiles/tryopen.dir/tryopen.c.o: ../regress/tryopen.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/blackreaper/Documents/6th Sem/LBP/Shell/libzip-1.7.3/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object regress/CMakeFiles/tryopen.dir/tryopen.c.o"
	cd "/home/blackreaper/Documents/6th Sem/LBP/Shell/libzip-1.7.3/build/regress" && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/tryopen.dir/tryopen.c.o   -c "/home/blackreaper/Documents/6th Sem/LBP/Shell/libzip-1.7.3/regress/tryopen.c"

regress/CMakeFiles/tryopen.dir/tryopen.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/tryopen.dir/tryopen.c.i"
	cd "/home/blackreaper/Documents/6th Sem/LBP/Shell/libzip-1.7.3/build/regress" && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/home/blackreaper/Documents/6th Sem/LBP/Shell/libzip-1.7.3/regress/tryopen.c" > CMakeFiles/tryopen.dir/tryopen.c.i

regress/CMakeFiles/tryopen.dir/tryopen.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/tryopen.dir/tryopen.c.s"
	cd "/home/blackreaper/Documents/6th Sem/LBP/Shell/libzip-1.7.3/build/regress" && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/home/blackreaper/Documents/6th Sem/LBP/Shell/libzip-1.7.3/regress/tryopen.c" -o CMakeFiles/tryopen.dir/tryopen.c.s

# Object files for target tryopen
tryopen_OBJECTS = \
"CMakeFiles/tryopen.dir/tryopen.c.o"

# External object files for target tryopen
tryopen_EXTERNAL_OBJECTS =

regress/tryopen: regress/CMakeFiles/tryopen.dir/tryopen.c.o
regress/tryopen: regress/CMakeFiles/tryopen.dir/build.make
regress/tryopen: lib/libzip.so.5.3
regress/tryopen: regress/CMakeFiles/tryopen.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/blackreaper/Documents/6th Sem/LBP/Shell/libzip-1.7.3/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable tryopen"
	cd "/home/blackreaper/Documents/6th Sem/LBP/Shell/libzip-1.7.3/build/regress" && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/tryopen.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
regress/CMakeFiles/tryopen.dir/build: regress/tryopen

.PHONY : regress/CMakeFiles/tryopen.dir/build

regress/CMakeFiles/tryopen.dir/clean:
	cd "/home/blackreaper/Documents/6th Sem/LBP/Shell/libzip-1.7.3/build/regress" && $(CMAKE_COMMAND) -P CMakeFiles/tryopen.dir/cmake_clean.cmake
.PHONY : regress/CMakeFiles/tryopen.dir/clean

regress/CMakeFiles/tryopen.dir/depend:
	cd "/home/blackreaper/Documents/6th Sem/LBP/Shell/libzip-1.7.3/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/blackreaper/Documents/6th Sem/LBP/Shell/libzip-1.7.3" "/home/blackreaper/Documents/6th Sem/LBP/Shell/libzip-1.7.3/regress" "/home/blackreaper/Documents/6th Sem/LBP/Shell/libzip-1.7.3/build" "/home/blackreaper/Documents/6th Sem/LBP/Shell/libzip-1.7.3/build/regress" "/home/blackreaper/Documents/6th Sem/LBP/Shell/libzip-1.7.3/build/regress/CMakeFiles/tryopen.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : regress/CMakeFiles/tryopen.dir/depend
