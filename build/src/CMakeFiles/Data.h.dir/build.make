# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_SOURCE_DIR = /workspaces/finalProject/cs225FinalProject

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /workspaces/finalProject/cs225FinalProject/build

# Include any dependencies generated for this target.
include src/CMakeFiles/Data.h.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/CMakeFiles/Data.h.dir/compiler_depend.make

# Include the progress variables for this target.
include src/CMakeFiles/Data.h.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/Data.h.dir/flags.make

src/CMakeFiles/Data.h.dir/BTree.cpp.o: src/CMakeFiles/Data.h.dir/flags.make
src/CMakeFiles/Data.h.dir/BTree.cpp.o: ../src/BTree.cpp
src/CMakeFiles/Data.h.dir/BTree.cpp.o: src/CMakeFiles/Data.h.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/workspaces/finalProject/cs225FinalProject/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/Data.h.dir/BTree.cpp.o"
	cd /workspaces/finalProject/cs225FinalProject/build/src && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/Data.h.dir/BTree.cpp.o -MF CMakeFiles/Data.h.dir/BTree.cpp.o.d -o CMakeFiles/Data.h.dir/BTree.cpp.o -c /workspaces/finalProject/cs225FinalProject/src/BTree.cpp

src/CMakeFiles/Data.h.dir/BTree.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Data.h.dir/BTree.cpp.i"
	cd /workspaces/finalProject/cs225FinalProject/build/src && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /workspaces/finalProject/cs225FinalProject/src/BTree.cpp > CMakeFiles/Data.h.dir/BTree.cpp.i

src/CMakeFiles/Data.h.dir/BTree.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Data.h.dir/BTree.cpp.s"
	cd /workspaces/finalProject/cs225FinalProject/build/src && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /workspaces/finalProject/cs225FinalProject/src/BTree.cpp -o CMakeFiles/Data.h.dir/BTree.cpp.s

src/CMakeFiles/Data.h.dir/Data.cpp.o: src/CMakeFiles/Data.h.dir/flags.make
src/CMakeFiles/Data.h.dir/Data.cpp.o: ../src/Data.cpp
src/CMakeFiles/Data.h.dir/Data.cpp.o: src/CMakeFiles/Data.h.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/workspaces/finalProject/cs225FinalProject/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/CMakeFiles/Data.h.dir/Data.cpp.o"
	cd /workspaces/finalProject/cs225FinalProject/build/src && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/Data.h.dir/Data.cpp.o -MF CMakeFiles/Data.h.dir/Data.cpp.o.d -o CMakeFiles/Data.h.dir/Data.cpp.o -c /workspaces/finalProject/cs225FinalProject/src/Data.cpp

src/CMakeFiles/Data.h.dir/Data.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Data.h.dir/Data.cpp.i"
	cd /workspaces/finalProject/cs225FinalProject/build/src && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /workspaces/finalProject/cs225FinalProject/src/Data.cpp > CMakeFiles/Data.h.dir/Data.cpp.i

src/CMakeFiles/Data.h.dir/Data.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Data.h.dir/Data.cpp.s"
	cd /workspaces/finalProject/cs225FinalProject/build/src && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /workspaces/finalProject/cs225FinalProject/src/Data.cpp -o CMakeFiles/Data.h.dir/Data.cpp.s

src/CMakeFiles/Data.h.dir/src.cpp.o: src/CMakeFiles/Data.h.dir/flags.make
src/CMakeFiles/Data.h.dir/src.cpp.o: ../src/src.cpp
src/CMakeFiles/Data.h.dir/src.cpp.o: src/CMakeFiles/Data.h.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/workspaces/finalProject/cs225FinalProject/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/CMakeFiles/Data.h.dir/src.cpp.o"
	cd /workspaces/finalProject/cs225FinalProject/build/src && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/Data.h.dir/src.cpp.o -MF CMakeFiles/Data.h.dir/src.cpp.o.d -o CMakeFiles/Data.h.dir/src.cpp.o -c /workspaces/finalProject/cs225FinalProject/src/src.cpp

src/CMakeFiles/Data.h.dir/src.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Data.h.dir/src.cpp.i"
	cd /workspaces/finalProject/cs225FinalProject/build/src && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /workspaces/finalProject/cs225FinalProject/src/src.cpp > CMakeFiles/Data.h.dir/src.cpp.i

src/CMakeFiles/Data.h.dir/src.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Data.h.dir/src.cpp.s"
	cd /workspaces/finalProject/cs225FinalProject/build/src && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /workspaces/finalProject/cs225FinalProject/src/src.cpp -o CMakeFiles/Data.h.dir/src.cpp.s

# Object files for target Data.h
Data_h_OBJECTS = \
"CMakeFiles/Data.h.dir/BTree.cpp.o" \
"CMakeFiles/Data.h.dir/Data.cpp.o" \
"CMakeFiles/Data.h.dir/src.cpp.o"

# External object files for target Data.h
Data_h_EXTERNAL_OBJECTS =

src/libData.h.a: src/CMakeFiles/Data.h.dir/BTree.cpp.o
src/libData.h.a: src/CMakeFiles/Data.h.dir/Data.cpp.o
src/libData.h.a: src/CMakeFiles/Data.h.dir/src.cpp.o
src/libData.h.a: src/CMakeFiles/Data.h.dir/build.make
src/libData.h.a: src/CMakeFiles/Data.h.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/workspaces/finalProject/cs225FinalProject/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX static library libData.h.a"
	cd /workspaces/finalProject/cs225FinalProject/build/src && $(CMAKE_COMMAND) -P CMakeFiles/Data.h.dir/cmake_clean_target.cmake
	cd /workspaces/finalProject/cs225FinalProject/build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Data.h.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/Data.h.dir/build: src/libData.h.a
.PHONY : src/CMakeFiles/Data.h.dir/build

src/CMakeFiles/Data.h.dir/clean:
	cd /workspaces/finalProject/cs225FinalProject/build/src && $(CMAKE_COMMAND) -P CMakeFiles/Data.h.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/Data.h.dir/clean

src/CMakeFiles/Data.h.dir/depend:
	cd /workspaces/finalProject/cs225FinalProject/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /workspaces/finalProject/cs225FinalProject /workspaces/finalProject/cs225FinalProject/src /workspaces/finalProject/cs225FinalProject/build /workspaces/finalProject/cs225FinalProject/build/src /workspaces/finalProject/cs225FinalProject/build/src/CMakeFiles/Data.h.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/Data.h.dir/depend

