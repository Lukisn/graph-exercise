# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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
CMAKE_COMMAND = /Applications/CMake.app/Contents/bin/cmake

# The command to remove a file.
RM = /Applications/CMake.app/Contents/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/Luki/CSE/WiSe16/EPA /Übung/Übung06-Graph"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/Luki/CSE/WiSe16/EPA /Übung/Übung06-Graph/build"

# Include any dependencies generated for this target.
include CMakeFiles/test_adjmatrix.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/test_adjmatrix.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/test_adjmatrix.dir/flags.make

CMakeFiles/test_adjmatrix.dir/test/test_adjmatrix.c.o: CMakeFiles/test_adjmatrix.dir/flags.make
CMakeFiles/test_adjmatrix.dir/test/test_adjmatrix.c.o: ../test/test_adjmatrix.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/Luki/CSE/WiSe16/EPA /Übung/Übung06-Graph/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/test_adjmatrix.dir/test/test_adjmatrix.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/test_adjmatrix.dir/test/test_adjmatrix.c.o   -c "/Users/Luki/CSE/WiSe16/EPA /Übung/Übung06-Graph/test/test_adjmatrix.c"

CMakeFiles/test_adjmatrix.dir/test/test_adjmatrix.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/test_adjmatrix.dir/test/test_adjmatrix.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/Users/Luki/CSE/WiSe16/EPA /Übung/Übung06-Graph/test/test_adjmatrix.c" > CMakeFiles/test_adjmatrix.dir/test/test_adjmatrix.c.i

CMakeFiles/test_adjmatrix.dir/test/test_adjmatrix.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/test_adjmatrix.dir/test/test_adjmatrix.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/Users/Luki/CSE/WiSe16/EPA /Übung/Übung06-Graph/test/test_adjmatrix.c" -o CMakeFiles/test_adjmatrix.dir/test/test_adjmatrix.c.s

CMakeFiles/test_adjmatrix.dir/test/test_adjmatrix.c.o.requires:

.PHONY : CMakeFiles/test_adjmatrix.dir/test/test_adjmatrix.c.o.requires

CMakeFiles/test_adjmatrix.dir/test/test_adjmatrix.c.o.provides: CMakeFiles/test_adjmatrix.dir/test/test_adjmatrix.c.o.requires
	$(MAKE) -f CMakeFiles/test_adjmatrix.dir/build.make CMakeFiles/test_adjmatrix.dir/test/test_adjmatrix.c.o.provides.build
.PHONY : CMakeFiles/test_adjmatrix.dir/test/test_adjmatrix.c.o.provides

CMakeFiles/test_adjmatrix.dir/test/test_adjmatrix.c.o.provides.build: CMakeFiles/test_adjmatrix.dir/test/test_adjmatrix.c.o


CMakeFiles/test_adjmatrix.dir/src/adjmatrix.c.o: CMakeFiles/test_adjmatrix.dir/flags.make
CMakeFiles/test_adjmatrix.dir/src/adjmatrix.c.o: ../src/adjmatrix.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/Luki/CSE/WiSe16/EPA /Übung/Übung06-Graph/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/test_adjmatrix.dir/src/adjmatrix.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/test_adjmatrix.dir/src/adjmatrix.c.o   -c "/Users/Luki/CSE/WiSe16/EPA /Übung/Übung06-Graph/src/adjmatrix.c"

CMakeFiles/test_adjmatrix.dir/src/adjmatrix.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/test_adjmatrix.dir/src/adjmatrix.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/Users/Luki/CSE/WiSe16/EPA /Übung/Übung06-Graph/src/adjmatrix.c" > CMakeFiles/test_adjmatrix.dir/src/adjmatrix.c.i

CMakeFiles/test_adjmatrix.dir/src/adjmatrix.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/test_adjmatrix.dir/src/adjmatrix.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/Users/Luki/CSE/WiSe16/EPA /Übung/Übung06-Graph/src/adjmatrix.c" -o CMakeFiles/test_adjmatrix.dir/src/adjmatrix.c.s

CMakeFiles/test_adjmatrix.dir/src/adjmatrix.c.o.requires:

.PHONY : CMakeFiles/test_adjmatrix.dir/src/adjmatrix.c.o.requires

CMakeFiles/test_adjmatrix.dir/src/adjmatrix.c.o.provides: CMakeFiles/test_adjmatrix.dir/src/adjmatrix.c.o.requires
	$(MAKE) -f CMakeFiles/test_adjmatrix.dir/build.make CMakeFiles/test_adjmatrix.dir/src/adjmatrix.c.o.provides.build
.PHONY : CMakeFiles/test_adjmatrix.dir/src/adjmatrix.c.o.provides

CMakeFiles/test_adjmatrix.dir/src/adjmatrix.c.o.provides.build: CMakeFiles/test_adjmatrix.dir/src/adjmatrix.c.o


# Object files for target test_adjmatrix
test_adjmatrix_OBJECTS = \
"CMakeFiles/test_adjmatrix.dir/test/test_adjmatrix.c.o" \
"CMakeFiles/test_adjmatrix.dir/src/adjmatrix.c.o"

# External object files for target test_adjmatrix
test_adjmatrix_EXTERNAL_OBJECTS =

test_adjmatrix: CMakeFiles/test_adjmatrix.dir/test/test_adjmatrix.c.o
test_adjmatrix: CMakeFiles/test_adjmatrix.dir/src/adjmatrix.c.o
test_adjmatrix: CMakeFiles/test_adjmatrix.dir/build.make
test_adjmatrix: CMakeFiles/test_adjmatrix.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/Luki/CSE/WiSe16/EPA /Übung/Übung06-Graph/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable test_adjmatrix"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_adjmatrix.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/test_adjmatrix.dir/build: test_adjmatrix

.PHONY : CMakeFiles/test_adjmatrix.dir/build

CMakeFiles/test_adjmatrix.dir/requires: CMakeFiles/test_adjmatrix.dir/test/test_adjmatrix.c.o.requires
CMakeFiles/test_adjmatrix.dir/requires: CMakeFiles/test_adjmatrix.dir/src/adjmatrix.c.o.requires

.PHONY : CMakeFiles/test_adjmatrix.dir/requires

CMakeFiles/test_adjmatrix.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/test_adjmatrix.dir/cmake_clean.cmake
.PHONY : CMakeFiles/test_adjmatrix.dir/clean

CMakeFiles/test_adjmatrix.dir/depend:
	cd "/Users/Luki/CSE/WiSe16/EPA /Übung/Übung06-Graph/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/Luki/CSE/WiSe16/EPA /Übung/Übung06-Graph" "/Users/Luki/CSE/WiSe16/EPA /Übung/Übung06-Graph" "/Users/Luki/CSE/WiSe16/EPA /Übung/Übung06-Graph/build" "/Users/Luki/CSE/WiSe16/EPA /Übung/Übung06-Graph/build" "/Users/Luki/CSE/WiSe16/EPA /Übung/Übung06-Graph/build/CMakeFiles/test_adjmatrix.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/test_adjmatrix.dir/depend

