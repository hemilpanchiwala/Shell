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
include src/CMakeFiles/ziptool.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/ziptool.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/ziptool.dir/flags.make

src/CMakeFiles/ziptool.dir/ziptool.c.o: src/CMakeFiles/ziptool.dir/flags.make
src/CMakeFiles/ziptool.dir/ziptool.c.o: ../src/ziptool.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/blackreaper/Documents/6th Sem/LBP/Shell/libzip-1.7.3/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object src/CMakeFiles/ziptool.dir/ziptool.c.o"
	cd "/home/blackreaper/Documents/6th Sem/LBP/Shell/libzip-1.7.3/build/src" && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ziptool.dir/ziptool.c.o   -c "/home/blackreaper/Documents/6th Sem/LBP/Shell/libzip-1.7.3/src/ziptool.c"

src/CMakeFiles/ziptool.dir/ziptool.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ziptool.dir/ziptool.c.i"
	cd "/home/blackreaper/Documents/6th Sem/LBP/Shell/libzip-1.7.3/build/src" && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/home/blackreaper/Documents/6th Sem/LBP/Shell/libzip-1.7.3/src/ziptool.c" > CMakeFiles/ziptool.dir/ziptool.c.i

src/CMakeFiles/ziptool.dir/ziptool.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ziptool.dir/ziptool.c.s"
	cd "/home/blackreaper/Documents/6th Sem/LBP/Shell/libzip-1.7.3/build/src" && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/home/blackreaper/Documents/6th Sem/LBP/Shell/libzip-1.7.3/src/ziptool.c" -o CMakeFiles/ziptool.dir/ziptool.c.s

# Object files for target ziptool
ziptool_OBJECTS = \
"CMakeFiles/ziptool.dir/ziptool.c.o"

# External object files for target ziptool
ziptool_EXTERNAL_OBJECTS =

src/ziptool: src/CMakeFiles/ziptool.dir/ziptool.c.o
src/ziptool: src/CMakeFiles/ziptool.dir/build.make
src/ziptool: lib/libzip.so.5.3
src/ziptool: src/CMakeFiles/ziptool.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/blackreaper/Documents/6th Sem/LBP/Shell/libzip-1.7.3/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable ziptool"
	cd "/home/blackreaper/Documents/6th Sem/LBP/Shell/libzip-1.7.3/build/src" && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ziptool.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/ziptool.dir/build: src/ziptool

.PHONY : src/CMakeFiles/ziptool.dir/build

src/CMakeFiles/ziptool.dir/clean:
	cd "/home/blackreaper/Documents/6th Sem/LBP/Shell/libzip-1.7.3/build/src" && $(CMAKE_COMMAND) -P CMakeFiles/ziptool.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/ziptool.dir/clean

src/CMakeFiles/ziptool.dir/depend:
	cd "/home/blackreaper/Documents/6th Sem/LBP/Shell/libzip-1.7.3/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/blackreaper/Documents/6th Sem/LBP/Shell/libzip-1.7.3" "/home/blackreaper/Documents/6th Sem/LBP/Shell/libzip-1.7.3/src" "/home/blackreaper/Documents/6th Sem/LBP/Shell/libzip-1.7.3/build" "/home/blackreaper/Documents/6th Sem/LBP/Shell/libzip-1.7.3/build/src" "/home/blackreaper/Documents/6th Sem/LBP/Shell/libzip-1.7.3/build/src/CMakeFiles/ziptool.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : src/CMakeFiles/ziptool.dir/depend

