# CMAKE generated file: DO NOT EDIT!
# Generated by CMake Version 3.22
cmake_policy(SET CMP0009 NEW)

# src_sources at src/CMakeLists.txt:5 (file)
file(GLOB_RECURSE NEW_GLOB LIST_DIRECTORIES false "/workspaces/FinalProject/cs225FinalProject/src/*.cpp")
set(OLD_GLOB
  "/workspaces/FinalProject/cs225FinalProject/src/BTree.cpp"
  "/workspaces/FinalProject/cs225FinalProject/src/Data.cpp"
  "/workspaces/FinalProject/cs225FinalProject/src/ReadCSV.cpp"
  )
if(NOT "${NEW_GLOB}" STREQUAL "${OLD_GLOB}")
  message("-- GLOB mismatch!")
  file(TOUCH_NOCREATE "/workspaces/FinalProject/cs225FinalProject/build/CMakeFiles/cmake.verify_globs")
endif()

# src_sources at src/CMakeLists.txt:5 (file)
file(GLOB_RECURSE NEW_GLOB LIST_DIRECTORIES false "/workspaces/FinalProject/cs225FinalProject/src/*.hpp")
set(OLD_GLOB
  )
if(NOT "${NEW_GLOB}" STREQUAL "${OLD_GLOB}")
  message("-- GLOB mismatch!")
  file(TOUCH_NOCREATE "/workspaces/FinalProject/cs225FinalProject/build/CMakeFiles/cmake.verify_globs")
endif()

# tests_src at CMakeLists.txt:130 (file)
file(GLOB_RECURSE NEW_GLOB LIST_DIRECTORIES false "/workspaces/FinalProject/cs225FinalProject/tests/*.cpp")
set(OLD_GLOB
  "/workspaces/FinalProject/cs225FinalProject/tests/tests.cpp"
  )
if(NOT "${NEW_GLOB}" STREQUAL "${OLD_GLOB}")
  message("-- GLOB mismatch!")
  file(TOUCH_NOCREATE "/workspaces/FinalProject/cs225FinalProject/build/CMakeFiles/cmake.verify_globs")
endif()
