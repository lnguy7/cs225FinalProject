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
<<<<<<< HEAD
CMAKE_SOURCE_DIR = /workspaces/FinalProject/cs225FinalProject

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /workspaces/FinalProject/cs225FinalProject/build
=======
CMAKE_SOURCE_DIR = /workspaces/finalProject/cs225FinalProject

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /workspaces/finalProject/cs225FinalProject/build
>>>>>>> refs/remotes/origin/main

# Include any dependencies generated for this target.
include src/CMakeFiles/BTree.h.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/CMakeFiles/BTree.h.dir/compiler_depend.make

# Include the progress variables for this target.
include src/CMakeFiles/BTree.h.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/BTree.h.dir/flags.make

src/CMakeFiles/BTree.h.dir/BTree.cpp.o: src/CMakeFiles/BTree.h.dir/flags.make
src/CMakeFiles/BTree.h.dir/BTree.cpp.o: ../src/BTree.cpp
src/CMakeFiles/BTree.h.dir/BTree.cpp.o: src/CMakeFiles/BTree.h.dir/compiler_depend.ts
<<<<<<< HEAD
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/workspaces/FinalProject/cs225FinalProject/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/BTree.h.dir/BTree.cpp.o"
	cd /workspaces/FinalProject/cs225FinalProject/build/src && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/BTree.h.dir/BTree.cpp.o -MF CMakeFiles/BTree.h.dir/BTree.cpp.o.d -o CMakeFiles/BTree.h.dir/BTree.cpp.o -c /workspaces/FinalProject/cs225FinalProject/src/BTree.cpp

src/CMakeFiles/BTree.h.dir/BTree.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BTree.h.dir/BTree.cpp.i"
	cd /workspaces/FinalProject/cs225FinalProject/build/src && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /workspaces/FinalProject/cs225FinalProject/src/BTree.cpp > CMakeFiles/BTree.h.dir/BTree.cpp.i

src/CMakeFiles/BTree.h.dir/BTree.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BTree.h.dir/BTree.cpp.s"
	cd /workspaces/FinalProject/cs225FinalProject/build/src && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /workspaces/FinalProject/cs225FinalProject/src/BTree.cpp -o CMakeFiles/BTree.h.dir/BTree.cpp.s
=======
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/workspaces/finalProject/cs225FinalProject/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/BTree.h.dir/BTree.cpp.o"
	cd /workspaces/finalProject/cs225FinalProject/build/src && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/BTree.h.dir/BTree.cpp.o -MF CMakeFiles/BTree.h.dir/BTree.cpp.o.d -o CMakeFiles/BTree.h.dir/BTree.cpp.o -c /workspaces/finalProject/cs225FinalProject/src/BTree.cpp

src/CMakeFiles/BTree.h.dir/BTree.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BTree.h.dir/BTree.cpp.i"
	cd /workspaces/finalProject/cs225FinalProject/build/src && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /workspaces/finalProject/cs225FinalProject/src/BTree.cpp > CMakeFiles/BTree.h.dir/BTree.cpp.i

src/CMakeFiles/BTree.h.dir/BTree.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BTree.h.dir/BTree.cpp.s"
	cd /workspaces/finalProject/cs225FinalProject/build/src && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /workspaces/finalProject/cs225FinalProject/src/BTree.cpp -o CMakeFiles/BTree.h.dir/BTree.cpp.s
>>>>>>> refs/remotes/origin/main

src/CMakeFiles/BTree.h.dir/Data.cpp.o: src/CMakeFiles/BTree.h.dir/flags.make
src/CMakeFiles/BTree.h.dir/Data.cpp.o: ../src/Data.cpp
src/CMakeFiles/BTree.h.dir/Data.cpp.o: src/CMakeFiles/BTree.h.dir/compiler_depend.ts
<<<<<<< HEAD
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/workspaces/FinalProject/cs225FinalProject/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/CMakeFiles/BTree.h.dir/Data.cpp.o"
	cd /workspaces/FinalProject/cs225FinalProject/build/src && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/BTree.h.dir/Data.cpp.o -MF CMakeFiles/BTree.h.dir/Data.cpp.o.d -o CMakeFiles/BTree.h.dir/Data.cpp.o -c /workspaces/FinalProject/cs225FinalProject/src/Data.cpp

src/CMakeFiles/BTree.h.dir/Data.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BTree.h.dir/Data.cpp.i"
	cd /workspaces/FinalProject/cs225FinalProject/build/src && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /workspaces/FinalProject/cs225FinalProject/src/Data.cpp > CMakeFiles/BTree.h.dir/Data.cpp.i

src/CMakeFiles/BTree.h.dir/Data.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BTree.h.dir/Data.cpp.s"
	cd /workspaces/FinalProject/cs225FinalProject/build/src && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /workspaces/FinalProject/cs225FinalProject/src/Data.cpp -o CMakeFiles/BTree.h.dir/Data.cpp.s
=======
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/workspaces/finalProject/cs225FinalProject/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/CMakeFiles/BTree.h.dir/Data.cpp.o"
	cd /workspaces/finalProject/cs225FinalProject/build/src && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/BTree.h.dir/Data.cpp.o -MF CMakeFiles/BTree.h.dir/Data.cpp.o.d -o CMakeFiles/BTree.h.dir/Data.cpp.o -c /workspaces/finalProject/cs225FinalProject/src/Data.cpp

src/CMakeFiles/BTree.h.dir/Data.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BTree.h.dir/Data.cpp.i"
	cd /workspaces/finalProject/cs225FinalProject/build/src && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /workspaces/finalProject/cs225FinalProject/src/Data.cpp > CMakeFiles/BTree.h.dir/Data.cpp.i

src/CMakeFiles/BTree.h.dir/Data.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BTree.h.dir/Data.cpp.s"
	cd /workspaces/finalProject/cs225FinalProject/build/src && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /workspaces/finalProject/cs225FinalProject/src/Data.cpp -o CMakeFiles/BTree.h.dir/Data.cpp.s
>>>>>>> refs/remotes/origin/main

src/CMakeFiles/BTree.h.dir/ReadCSV.cpp.o: src/CMakeFiles/BTree.h.dir/flags.make
src/CMakeFiles/BTree.h.dir/ReadCSV.cpp.o: ../src/ReadCSV.cpp
src/CMakeFiles/BTree.h.dir/ReadCSV.cpp.o: src/CMakeFiles/BTree.h.dir/compiler_depend.ts
<<<<<<< HEAD
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/workspaces/FinalProject/cs225FinalProject/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/CMakeFiles/BTree.h.dir/ReadCSV.cpp.o"
	cd /workspaces/FinalProject/cs225FinalProject/build/src && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/BTree.h.dir/ReadCSV.cpp.o -MF CMakeFiles/BTree.h.dir/ReadCSV.cpp.o.d -o CMakeFiles/BTree.h.dir/ReadCSV.cpp.o -c /workspaces/FinalProject/cs225FinalProject/src/ReadCSV.cpp

src/CMakeFiles/BTree.h.dir/ReadCSV.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BTree.h.dir/ReadCSV.cpp.i"
	cd /workspaces/FinalProject/cs225FinalProject/build/src && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /workspaces/FinalProject/cs225FinalProject/src/ReadCSV.cpp > CMakeFiles/BTree.h.dir/ReadCSV.cpp.i

src/CMakeFiles/BTree.h.dir/ReadCSV.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BTree.h.dir/ReadCSV.cpp.s"
	cd /workspaces/FinalProject/cs225FinalProject/build/src && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /workspaces/FinalProject/cs225FinalProject/src/ReadCSV.cpp -o CMakeFiles/BTree.h.dir/ReadCSV.cpp.s
=======
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/workspaces/finalProject/cs225FinalProject/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/CMakeFiles/BTree.h.dir/ReadCSV.cpp.o"
	cd /workspaces/finalProject/cs225FinalProject/build/src && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/CMakeFiles/BTree.h.dir/ReadCSV.cpp.o -MF CMakeFiles/BTree.h.dir/ReadCSV.cpp.o.d -o CMakeFiles/BTree.h.dir/ReadCSV.cpp.o -c /workspaces/finalProject/cs225FinalProject/src/ReadCSV.cpp

src/CMakeFiles/BTree.h.dir/ReadCSV.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BTree.h.dir/ReadCSV.cpp.i"
	cd /workspaces/finalProject/cs225FinalProject/build/src && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /workspaces/finalProject/cs225FinalProject/src/ReadCSV.cpp > CMakeFiles/BTree.h.dir/ReadCSV.cpp.i

src/CMakeFiles/BTree.h.dir/ReadCSV.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BTree.h.dir/ReadCSV.cpp.s"
	cd /workspaces/finalProject/cs225FinalProject/build/src && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /workspaces/finalProject/cs225FinalProject/src/ReadCSV.cpp -o CMakeFiles/BTree.h.dir/ReadCSV.cpp.s
>>>>>>> refs/remotes/origin/main

# Object files for target BTree.h
BTree_h_OBJECTS = \
"CMakeFiles/BTree.h.dir/BTree.cpp.o" \
"CMakeFiles/BTree.h.dir/Data.cpp.o" \
"CMakeFiles/BTree.h.dir/ReadCSV.cpp.o"

# External object files for target BTree.h
BTree_h_EXTERNAL_OBJECTS =

src/libBTree.h.a: src/CMakeFiles/BTree.h.dir/BTree.cpp.o
src/libBTree.h.a: src/CMakeFiles/BTree.h.dir/Data.cpp.o
src/libBTree.h.a: src/CMakeFiles/BTree.h.dir/ReadCSV.cpp.o
src/libBTree.h.a: src/CMakeFiles/BTree.h.dir/build.make
src/libBTree.h.a: src/CMakeFiles/BTree.h.dir/link.txt
<<<<<<< HEAD
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/workspaces/FinalProject/cs225FinalProject/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX static library libBTree.h.a"
	cd /workspaces/FinalProject/cs225FinalProject/build/src && $(CMAKE_COMMAND) -P CMakeFiles/BTree.h.dir/cmake_clean_target.cmake
	cd /workspaces/FinalProject/cs225FinalProject/build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/BTree.h.dir/link.txt --verbose=$(VERBOSE)
=======
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/workspaces/finalProject/cs225FinalProject/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX static library libBTree.h.a"
	cd /workspaces/finalProject/cs225FinalProject/build/src && $(CMAKE_COMMAND) -P CMakeFiles/BTree.h.dir/cmake_clean_target.cmake
	cd /workspaces/finalProject/cs225FinalProject/build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/BTree.h.dir/link.txt --verbose=$(VERBOSE)
>>>>>>> refs/remotes/origin/main

# Rule to build all files generated by this target.
src/CMakeFiles/BTree.h.dir/build: src/libBTree.h.a
.PHONY : src/CMakeFiles/BTree.h.dir/build

src/CMakeFiles/BTree.h.dir/clean:
<<<<<<< HEAD
	cd /workspaces/FinalProject/cs225FinalProject/build/src && $(CMAKE_COMMAND) -P CMakeFiles/BTree.h.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/BTree.h.dir/clean

src/CMakeFiles/BTree.h.dir/depend:
	cd /workspaces/FinalProject/cs225FinalProject/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /workspaces/FinalProject/cs225FinalProject /workspaces/FinalProject/cs225FinalProject/src /workspaces/FinalProject/cs225FinalProject/build /workspaces/FinalProject/cs225FinalProject/build/src /workspaces/FinalProject/cs225FinalProject/build/src/CMakeFiles/BTree.h.dir/DependInfo.cmake --color=$(COLOR)
=======
	cd /workspaces/finalProject/cs225FinalProject/build/src && $(CMAKE_COMMAND) -P CMakeFiles/BTree.h.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/BTree.h.dir/clean

src/CMakeFiles/BTree.h.dir/depend:
	cd /workspaces/finalProject/cs225FinalProject/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /workspaces/finalProject/cs225FinalProject /workspaces/finalProject/cs225FinalProject/src /workspaces/finalProject/cs225FinalProject/build /workspaces/finalProject/cs225FinalProject/build/src /workspaces/finalProject/cs225FinalProject/build/src/CMakeFiles/BTree.h.dir/DependInfo.cmake --color=$(COLOR)
>>>>>>> refs/remotes/origin/main
.PHONY : src/CMakeFiles/BTree.h.dir/depend

