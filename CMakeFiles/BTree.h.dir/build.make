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
include CMakeFiles/BTree.h.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/BTree.h.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/BTree.h.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/BTree.h.dir/flags.make

CMakeFiles/BTree.h.dir/BTree.o: CMakeFiles/BTree.h.dir/flags.make
CMakeFiles/BTree.h.dir/BTree.o: src/BTree.cpp
CMakeFiles/BTree.h.dir/BTree.o: CMakeFiles/BTree.h.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/workspaces/CS 225 FInal Project/cs225FinalProject/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/BTree.h.dir/BTree.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/BTree.h.dir/BTree.o -MF CMakeFiles/BTree.h.dir/BTree.o.d -o CMakeFiles/BTree.h.dir/BTree.o -c "/workspaces/CS 225 FInal Project/cs225FinalProject/src/BTree.cpp"

CMakeFiles/BTree.h.dir/BTree.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BTree.h.dir/BTree.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/workspaces/CS 225 FInal Project/cs225FinalProject/src/BTree.cpp" > CMakeFiles/BTree.h.dir/BTree.i

CMakeFiles/BTree.h.dir/BTree.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BTree.h.dir/BTree.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/workspaces/CS 225 FInal Project/cs225FinalProject/src/BTree.cpp" -o CMakeFiles/BTree.h.dir/BTree.s

CMakeFiles/BTree.h.dir/Data.o: CMakeFiles/BTree.h.dir/flags.make
CMakeFiles/BTree.h.dir/Data.o: src/Data.cpp
CMakeFiles/BTree.h.dir/Data.o: CMakeFiles/BTree.h.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/workspaces/CS 225 FInal Project/cs225FinalProject/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/BTree.h.dir/Data.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/BTree.h.dir/Data.o -MF CMakeFiles/BTree.h.dir/Data.o.d -o CMakeFiles/BTree.h.dir/Data.o -c "/workspaces/CS 225 FInal Project/cs225FinalProject/src/Data.cpp"

CMakeFiles/BTree.h.dir/Data.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BTree.h.dir/Data.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/workspaces/CS 225 FInal Project/cs225FinalProject/src/Data.cpp" > CMakeFiles/BTree.h.dir/Data.i

CMakeFiles/BTree.h.dir/Data.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BTree.h.dir/Data.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/workspaces/CS 225 FInal Project/cs225FinalProject/src/Data.cpp" -o CMakeFiles/BTree.h.dir/Data.s

CMakeFiles/BTree.h.dir/src.o: CMakeFiles/BTree.h.dir/flags.make
CMakeFiles/BTree.h.dir/src.o: src/src.cpp
CMakeFiles/BTree.h.dir/src.o: CMakeFiles/BTree.h.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/workspaces/CS 225 FInal Project/cs225FinalProject/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/BTree.h.dir/src.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/BTree.h.dir/src.o -MF CMakeFiles/BTree.h.dir/src.o.d -o CMakeFiles/BTree.h.dir/src.o -c "/workspaces/CS 225 FInal Project/cs225FinalProject/src/src.cpp"

CMakeFiles/BTree.h.dir/src.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BTree.h.dir/src.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/workspaces/CS 225 FInal Project/cs225FinalProject/src/src.cpp" > CMakeFiles/BTree.h.dir/src.i

CMakeFiles/BTree.h.dir/src.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BTree.h.dir/src.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/workspaces/CS 225 FInal Project/cs225FinalProject/src/src.cpp" -o CMakeFiles/BTree.h.dir/src.s

# Object files for target BTree.h
BTree_h_OBJECTS = \
"CMakeFiles/BTree.h.dir/BTree.o" \
"CMakeFiles/BTree.h.dir/Data.o" \
"CMakeFiles/BTree.h.dir/src.o"

# External object files for target BTree.h
BTree_h_EXTERNAL_OBJECTS =

libBTree.h.a: CMakeFiles/BTree.h.dir/BTree.o
libBTree.h.a: CMakeFiles/BTree.h.dir/Data.o
libBTree.h.a: CMakeFiles/BTree.h.dir/src.o
libBTree.h.a: CMakeFiles/BTree.h.dir/build.make
libBTree.h.a: CMakeFiles/BTree.h.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/workspaces/CS 225 FInal Project/cs225FinalProject/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX static library libBTree.h.a"
	$(CMAKE_COMMAND) -P CMakeFiles/BTree.h.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/BTree.h.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/BTree.h.dir/build: libBTree.h.a
.PHONY : CMakeFiles/BTree.h.dir/build

CMakeFiles/BTree.h.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/BTree.h.dir/cmake_clean.cmake
.PHONY : CMakeFiles/BTree.h.dir/clean

CMakeFiles/BTree.h.dir/depend:
	cd "/workspaces/CS 225 FInal Project/cs225FinalProject" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/workspaces/CS 225 FInal Project/cs225FinalProject/src" "/workspaces/CS 225 FInal Project/cs225FinalProject/src" "/workspaces/CS 225 FInal Project/cs225FinalProject" "/workspaces/CS 225 FInal Project/cs225FinalProject" "/workspaces/CS 225 FInal Project/cs225FinalProject/CMakeFiles/BTree.h.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/BTree.h.dir/depend

