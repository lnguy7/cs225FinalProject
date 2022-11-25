# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Default target executed when no arguments are given to make.
default_target: all
.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:

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

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "No interactive CMake dialog available..."
	/usr/bin/cmake -E echo No\ interactive\ CMake\ dialog\ available.
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache
.PHONY : edit_cache/fast

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/usr/bin/cmake --regenerate-during-build -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache
.PHONY : rebuild_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start "/workspaces/CS 225 FInal Project/cs225FinalProject/CMakeFiles" "/workspaces/CS 225 FInal Project/cs225FinalProject//CMakeFiles/progress.marks"
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start "/workspaces/CS 225 FInal Project/cs225FinalProject/CMakeFiles" 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean
.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -P "/workspaces/CS 225 FInal Project/cs225FinalProject/CMakeFiles/VerifyGlobs.cmake"
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named src

# Build rule for target.
src: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 src
.PHONY : src

# fast build rule for target.
src/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/src.dir/build.make CMakeFiles/src.dir/build
.PHONY : src/fast

#=============================================================================
# Target rules for targets named BTree.h

# Build rule for target.
BTree.h: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 BTree.h
.PHONY : BTree.h

# fast build rule for target.
BTree.h/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/BTree.h.dir/build.make CMakeFiles/BTree.h.dir/build
.PHONY : BTree.h/fast

#=============================================================================
# Target rules for targets named BTree.cpp

# Build rule for target.
BTree.cpp: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 BTree.cpp
.PHONY : BTree.cpp

# fast build rule for target.
BTree.cpp/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/BTree.cpp.dir/build.make CMakeFiles/BTree.cpp.dir/build
.PHONY : BTree.cpp/fast

#=============================================================================
# Target rules for targets named Data.h

# Build rule for target.
Data.h: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 Data.h
.PHONY : Data.h

# fast build rule for target.
Data.h/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Data.h.dir/build.make CMakeFiles/Data.h.dir/build
.PHONY : Data.h/fast

#=============================================================================
# Target rules for targets named Data.cpp

# Build rule for target.
Data.cpp: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 Data.cpp
.PHONY : Data.cpp

# fast build rule for target.
Data.cpp/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Data.cpp.dir/build.make CMakeFiles/Data.cpp.dir/build
.PHONY : Data.cpp/fast

# target to build an object file
BTree.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/src.dir/build.make CMakeFiles/src.dir/BTree.o
	$(MAKE) $(MAKESILENT) -f CMakeFiles/BTree.h.dir/build.make CMakeFiles/BTree.h.dir/BTree.o
	$(MAKE) $(MAKESILENT) -f CMakeFiles/BTree.cpp.dir/build.make CMakeFiles/BTree.cpp.dir/BTree.o
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Data.h.dir/build.make CMakeFiles/Data.h.dir/BTree.o
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Data.cpp.dir/build.make CMakeFiles/Data.cpp.dir/BTree.o
.PHONY : BTree.o

# target to preprocess a source file
BTree.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/src.dir/build.make CMakeFiles/src.dir/BTree.i
	$(MAKE) $(MAKESILENT) -f CMakeFiles/BTree.h.dir/build.make CMakeFiles/BTree.h.dir/BTree.i
	$(MAKE) $(MAKESILENT) -f CMakeFiles/BTree.cpp.dir/build.make CMakeFiles/BTree.cpp.dir/BTree.i
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Data.h.dir/build.make CMakeFiles/Data.h.dir/BTree.i
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Data.cpp.dir/build.make CMakeFiles/Data.cpp.dir/BTree.i
.PHONY : BTree.i

# target to generate assembly for a file
BTree.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/src.dir/build.make CMakeFiles/src.dir/BTree.s
	$(MAKE) $(MAKESILENT) -f CMakeFiles/BTree.h.dir/build.make CMakeFiles/BTree.h.dir/BTree.s
	$(MAKE) $(MAKESILENT) -f CMakeFiles/BTree.cpp.dir/build.make CMakeFiles/BTree.cpp.dir/BTree.s
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Data.h.dir/build.make CMakeFiles/Data.h.dir/BTree.s
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Data.cpp.dir/build.make CMakeFiles/Data.cpp.dir/BTree.s
.PHONY : BTree.s

# target to build an object file
Data.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/src.dir/build.make CMakeFiles/src.dir/Data.o
	$(MAKE) $(MAKESILENT) -f CMakeFiles/BTree.h.dir/build.make CMakeFiles/BTree.h.dir/Data.o
	$(MAKE) $(MAKESILENT) -f CMakeFiles/BTree.cpp.dir/build.make CMakeFiles/BTree.cpp.dir/Data.o
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Data.h.dir/build.make CMakeFiles/Data.h.dir/Data.o
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Data.cpp.dir/build.make CMakeFiles/Data.cpp.dir/Data.o
.PHONY : Data.o

# target to preprocess a source file
Data.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/src.dir/build.make CMakeFiles/src.dir/Data.i
	$(MAKE) $(MAKESILENT) -f CMakeFiles/BTree.h.dir/build.make CMakeFiles/BTree.h.dir/Data.i
	$(MAKE) $(MAKESILENT) -f CMakeFiles/BTree.cpp.dir/build.make CMakeFiles/BTree.cpp.dir/Data.i
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Data.h.dir/build.make CMakeFiles/Data.h.dir/Data.i
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Data.cpp.dir/build.make CMakeFiles/Data.cpp.dir/Data.i
.PHONY : Data.i

# target to generate assembly for a file
Data.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/src.dir/build.make CMakeFiles/src.dir/Data.s
	$(MAKE) $(MAKESILENT) -f CMakeFiles/BTree.h.dir/build.make CMakeFiles/BTree.h.dir/Data.s
	$(MAKE) $(MAKESILENT) -f CMakeFiles/BTree.cpp.dir/build.make CMakeFiles/BTree.cpp.dir/Data.s
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Data.h.dir/build.make CMakeFiles/Data.h.dir/Data.s
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Data.cpp.dir/build.make CMakeFiles/Data.cpp.dir/Data.s
.PHONY : Data.s

# target to build an object file
src.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/src.dir/build.make CMakeFiles/src.dir/src.o
	$(MAKE) $(MAKESILENT) -f CMakeFiles/BTree.h.dir/build.make CMakeFiles/BTree.h.dir/src.o
	$(MAKE) $(MAKESILENT) -f CMakeFiles/BTree.cpp.dir/build.make CMakeFiles/BTree.cpp.dir/src.o
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Data.h.dir/build.make CMakeFiles/Data.h.dir/src.o
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Data.cpp.dir/build.make CMakeFiles/Data.cpp.dir/src.o
.PHONY : src.o

# target to preprocess a source file
src.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/src.dir/build.make CMakeFiles/src.dir/src.i
	$(MAKE) $(MAKESILENT) -f CMakeFiles/BTree.h.dir/build.make CMakeFiles/BTree.h.dir/src.i
	$(MAKE) $(MAKESILENT) -f CMakeFiles/BTree.cpp.dir/build.make CMakeFiles/BTree.cpp.dir/src.i
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Data.h.dir/build.make CMakeFiles/Data.h.dir/src.i
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Data.cpp.dir/build.make CMakeFiles/Data.cpp.dir/src.i
.PHONY : src.i

# target to generate assembly for a file
src.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/src.dir/build.make CMakeFiles/src.dir/src.s
	$(MAKE) $(MAKESILENT) -f CMakeFiles/BTree.h.dir/build.make CMakeFiles/BTree.h.dir/src.s
	$(MAKE) $(MAKESILENT) -f CMakeFiles/BTree.cpp.dir/build.make CMakeFiles/BTree.cpp.dir/src.s
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Data.h.dir/build.make CMakeFiles/Data.h.dir/src.s
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Data.cpp.dir/build.make CMakeFiles/Data.cpp.dir/src.s
.PHONY : src.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... edit_cache"
	@echo "... rebuild_cache"
	@echo "... BTree.cpp"
	@echo "... BTree.h"
	@echo "... Data.cpp"
	@echo "... Data.h"
	@echo "... src"
	@echo "... BTree.o"
	@echo "... BTree.i"
	@echo "... BTree.s"
	@echo "... Data.o"
	@echo "... Data.i"
	@echo "... Data.s"
	@echo "... src.o"
	@echo "... src.i"
	@echo "... src.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -P "/workspaces/CS 225 FInal Project/cs225FinalProject/CMakeFiles/VerifyGlobs.cmake"
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system

