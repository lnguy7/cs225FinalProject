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
CMAKE_SOURCE_DIR = "/workspaces/CS 225 FInal Project/cs225FinalProject/src"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/workspaces/CS 225 FInal Project/cs225FinalProject"

# Include any dependencies generated for this target.
include CMakeFiles/BTree.cpp.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/BTree.cpp.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/BTree.cpp.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/BTree.cpp.dir/flags.make

CMakeFiles/BTree.cpp.dir/BTree.o: CMakeFiles/BTree.cpp.dir/flags.make
CMakeFiles/BTree.cpp.dir/BTree.o: src/BTree.cpp
CMakeFiles/BTree.cpp.dir/BTree.o: CMakeFiles/BTree.cpp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/workspaces/CS 225 FInal Project/cs225FinalProject/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/BTree.cpp.dir/BTree.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/BTree.cpp.dir/BTree.o -MF CMakeFiles/BTree.cpp.dir/BTree.o.d -o CMakeFiles/BTree.cpp.dir/BTree.o -c "/workspaces/CS 225 FInal Project/cs225FinalProject/src/BTree.cpp"

CMakeFiles/BTree.cpp.dir/BTree.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BTree.cpp.dir/BTree.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/workspaces/CS 225 FInal Project/cs225FinalProject/src/BTree.cpp" > CMakeFiles/BTree.cpp.dir/BTree.i

CMakeFiles/BTree.cpp.dir/BTree.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BTree.cpp.dir/BTree.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/workspaces/CS 225 FInal Project/cs225FinalProject/src/BTree.cpp" -o CMakeFiles/BTree.cpp.dir/BTree.s

CMakeFiles/BTree.cpp.dir/Data.o: CMakeFiles/BTree.cpp.dir/flags.make
CMakeFiles/BTree.cpp.dir/Data.o: src/Data.cpp
CMakeFiles/BTree.cpp.dir/Data.o: CMakeFiles/BTree.cpp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/workspaces/CS 225 FInal Project/cs225FinalProject/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/BTree.cpp.dir/Data.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/BTree.cpp.dir/Data.o -MF CMakeFiles/BTree.cpp.dir/Data.o.d -o CMakeFiles/BTree.cpp.dir/Data.o -c "/workspaces/CS 225 FInal Project/cs225FinalProject/src/Data.cpp"

CMakeFiles/BTree.cpp.dir/Data.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BTree.cpp.dir/Data.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/workspaces/CS 225 FInal Project/cs225FinalProject/src/Data.cpp" > CMakeFiles/BTree.cpp.dir/Data.i

CMakeFiles/BTree.cpp.dir/Data.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BTree.cpp.dir/Data.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/workspaces/CS 225 FInal Project/cs225FinalProject/src/Data.cpp" -o CMakeFiles/BTree.cpp.dir/Data.s

CMakeFiles/BTree.cpp.dir/src.o: CMakeFiles/BTree.cpp.dir/flags.make
CMakeFiles/BTree.cpp.dir/src.o: src/src.cpp
CMakeFiles/BTree.cpp.dir/src.o: CMakeFiles/BTree.cpp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/workspaces/CS 225 FInal Project/cs225FinalProject/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/BTree.cpp.dir/src.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/BTree.cpp.dir/src.o -MF CMakeFiles/BTree.cpp.dir/src.o.d -o CMakeFiles/BTree.cpp.dir/src.o -c "/workspaces/CS 225 FInal Project/cs225FinalProject/src/src.cpp"

CMakeFiles/BTree.cpp.dir/src.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BTree.cpp.dir/src.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/workspaces/CS 225 FInal Project/cs225FinalProject/src/src.cpp" > CMakeFiles/BTree.cpp.dir/src.i

CMakeFiles/BTree.cpp.dir/src.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BTree.cpp.dir/src.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/workspaces/CS 225 FInal Project/cs225FinalProject/src/src.cpp" -o CMakeFiles/BTree.cpp.dir/src.s

# Object files for target BTree.cpp
BTree_cpp_OBJECTS = \
"CMakeFiles/BTree.cpp.dir/BTree.o" \
"CMakeFiles/BTree.cpp.dir/Data.o" \
"CMakeFiles/BTree.cpp.dir/src.o"

# External object files for target BTree.cpp
BTree_cpp_EXTERNAL_OBJECTS =

libBTree.cpp.a: CMakeFiles/BTree.cpp.dir/BTree.o
libBTree.cpp.a: CMakeFiles/BTree.cpp.dir/Data.o
libBTree.cpp.a: CMakeFiles/BTree.cpp.dir/src.o
libBTree.cpp.a: CMakeFiles/BTree.cpp.dir/build.make
libBTree.cpp.a: CMakeFiles/BTree.cpp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/workspaces/CS 225 FInal Project/cs225FinalProject/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX static library libBTree.cpp.a"
	$(CMAKE_COMMAND) -P CMakeFiles/BTree.cpp.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/BTree.cpp.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/BTree.cpp.dir/build: libBTree.cpp.a
.PHONY : CMakeFiles/BTree.cpp.dir/build

CMakeFiles/BTree.cpp.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/BTree.cpp.dir/cmake_clean.cmake
.PHONY : CMakeFiles/BTree.cpp.dir/clean

CMakeFiles/BTree.cpp.dir/depend:
	cd "/workspaces/CS 225 FInal Project/cs225FinalProject" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/workspaces/CS 225 FInal Project/cs225FinalProject/src" "/workspaces/CS 225 FInal Project/cs225FinalProject/src" "/workspaces/CS 225 FInal Project/cs225FinalProject" "/workspaces/CS 225 FInal Project/cs225FinalProject" "/workspaces/CS 225 FInal Project/cs225FinalProject/CMakeFiles/BTree.cpp.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/BTree.cpp.dir/depend
