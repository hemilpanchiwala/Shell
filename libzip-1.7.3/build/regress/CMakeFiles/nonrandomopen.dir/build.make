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
include regress/CMakeFiles/nonrandomopen.dir/depend.make

# Include the progress variables for this target.
include regress/CMakeFiles/nonrandomopen.dir/progress.make

# Include the compile flags for this target's objects.
include regress/CMakeFiles/nonrandomopen.dir/flags.make

regress/CMakeFiles/nonrandomopen.dir/nonrandomopen.c.o: regress/CMakeFiles/nonrandomopen.dir/flags.make
regress/CMakeFiles/nonrandomopen.dir/nonrandomopen.c.o: ../regress/nonrandomopen.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/blackreaper/Documents/6th Sem/LBP/Shell/libzip-1.7.3/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object regress/CMakeFiles/nonrandomopen.dir/nonrandomopen.c.o"
	cd "/home/blackreaper/Documents/6th Sem/LBP/Shell/libzip-1.7.3/build/regress" && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/nonrandomopen.dir/nonrandomopen.c.o   -c "/home/blackreaper/Documents/6th Sem/LBP/Shell/libzip-1.7.3/regress/nonrandomopen.c"

regress/CMakeFiles/nonrandomopen.dir/nonrandomopen.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/nonrandomopen.dir/nonrandomopen.c.i"
	cd "/home/blackreaper/Documents/6th Sem/LBP/Shell/libzip-1.7.3/build/regress" && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/home/blackreaper/Documents/6th Sem/LBP/Shell/libzip-1.7.3/regress/nonrandomopen.c" > CMakeFiles/nonrandomopen.dir/nonrandomopen.c.i

regress/CMakeFiles/nonrandomopen.dir/nonrandomopen.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/nonrandomopen.dir/nonrandomopen.c.s"
	cd "/home/blackreaper/Documents/6th Sem/LBP/Shell/libzip-1.7.3/build/regress" && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/home/blackreaper/Documents/6th Sem/LBP/Shell/libzip-1.7.3/regress/nonrandomopen.c" -o CMakeFiles/nonrandomopen.dir/nonrandomopen.c.s

# Object files for target nonrandomopen
nonrandomopen_OBJECTS = \
"CMakeFiles/nonrandomopen.dir/nonrandomopen.c.o"

# External object files for target nonrandomopen
nonrandomopen_EXTERNAL_OBJECTS =

regress/libnonrandomopen.so: regress/CMakeFiles/nonrandomopen.dir/nonrandomopen.c.o
regress/libnonrandomopen.so: regress/CMakeFiles/nonrandomopen.dir/build.make
regress/libnonrandomopen.so: regress/CMakeFiles/nonrandomopen.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/blackreaper/Documents/6th Sem/LBP/Shell/libzip-1.7.3/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C shared module libnonrandomopen.so"
	cd "/home/blackreaper/Documents/6th Sem/LBP/Shell/libzip-1.7.3/build/regress" && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/nonrandomopen.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
regress/CMakeFiles/nonrandomopen.dir/build: regress/libnonrandomopen.so

.PHONY : regress/CMakeFiles/nonrandomopen.dir/build

regress/CMakeFiles/nonrandomopen.dir/clean:
	cd "/home/blackreaper/Documents/6th Sem/LBP/Shell/libzip-1.7.3/build/regress" && $(CMAKE_COMMAND) -P CMakeFiles/nonrandomopen.dir/cmake_clean.cmake
.PHONY : regress/CMakeFiles/nonrandomopen.dir/clean

regress/CMakeFiles/nonrandomopen.dir/depend:
	cd "/home/blackreaper/Documents/6th Sem/LBP/Shell/libzip-1.7.3/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/blackreaper/Documents/6th Sem/LBP/Shell/libzip-1.7.3" "/home/blackreaper/Documents/6th Sem/LBP/Shell/libzip-1.7.3/regress" "/home/blackreaper/Documents/6th Sem/LBP/Shell/libzip-1.7.3/build" "/home/blackreaper/Documents/6th Sem/LBP/Shell/libzip-1.7.3/build/regress" "/home/blackreaper/Documents/6th Sem/LBP/Shell/libzip-1.7.3/build/regress/CMakeFiles/nonrandomopen.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : regress/CMakeFiles/nonrandomopen.dir/depend
