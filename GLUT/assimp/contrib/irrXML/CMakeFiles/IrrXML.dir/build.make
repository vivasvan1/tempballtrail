# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.9

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/vivasvan/Desktop/Projects/GLUT/assimp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/vivasvan/Desktop/Projects/GLUT/assimp

# Include any dependencies generated for this target.
include contrib/irrXML/CMakeFiles/IrrXML.dir/depend.make

# Include the progress variables for this target.
include contrib/irrXML/CMakeFiles/IrrXML.dir/progress.make

# Include the compile flags for this target's objects.
include contrib/irrXML/CMakeFiles/IrrXML.dir/flags.make

contrib/irrXML/CMakeFiles/IrrXML.dir/irrXML.cpp.o: contrib/irrXML/CMakeFiles/IrrXML.dir/flags.make
contrib/irrXML/CMakeFiles/IrrXML.dir/irrXML.cpp.o: contrib/irrXML/irrXML.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/vivasvan/Desktop/Projects/GLUT/assimp/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object contrib/irrXML/CMakeFiles/IrrXML.dir/irrXML.cpp.o"
	cd /home/vivasvan/Desktop/Projects/GLUT/assimp/contrib/irrXML && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/IrrXML.dir/irrXML.cpp.o -c /home/vivasvan/Desktop/Projects/GLUT/assimp/contrib/irrXML/irrXML.cpp

contrib/irrXML/CMakeFiles/IrrXML.dir/irrXML.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/IrrXML.dir/irrXML.cpp.i"
	cd /home/vivasvan/Desktop/Projects/GLUT/assimp/contrib/irrXML && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/vivasvan/Desktop/Projects/GLUT/assimp/contrib/irrXML/irrXML.cpp > CMakeFiles/IrrXML.dir/irrXML.cpp.i

contrib/irrXML/CMakeFiles/IrrXML.dir/irrXML.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/IrrXML.dir/irrXML.cpp.s"
	cd /home/vivasvan/Desktop/Projects/GLUT/assimp/contrib/irrXML && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/vivasvan/Desktop/Projects/GLUT/assimp/contrib/irrXML/irrXML.cpp -o CMakeFiles/IrrXML.dir/irrXML.cpp.s

contrib/irrXML/CMakeFiles/IrrXML.dir/irrXML.cpp.o.requires:

.PHONY : contrib/irrXML/CMakeFiles/IrrXML.dir/irrXML.cpp.o.requires

contrib/irrXML/CMakeFiles/IrrXML.dir/irrXML.cpp.o.provides: contrib/irrXML/CMakeFiles/IrrXML.dir/irrXML.cpp.o.requires
	$(MAKE) -f contrib/irrXML/CMakeFiles/IrrXML.dir/build.make contrib/irrXML/CMakeFiles/IrrXML.dir/irrXML.cpp.o.provides.build
.PHONY : contrib/irrXML/CMakeFiles/IrrXML.dir/irrXML.cpp.o.provides

contrib/irrXML/CMakeFiles/IrrXML.dir/irrXML.cpp.o.provides.build: contrib/irrXML/CMakeFiles/IrrXML.dir/irrXML.cpp.o


# Object files for target IrrXML
IrrXML_OBJECTS = \
"CMakeFiles/IrrXML.dir/irrXML.cpp.o"

# External object files for target IrrXML
IrrXML_EXTERNAL_OBJECTS =

lib/libIrrXML.a: contrib/irrXML/CMakeFiles/IrrXML.dir/irrXML.cpp.o
lib/libIrrXML.a: contrib/irrXML/CMakeFiles/IrrXML.dir/build.make
lib/libIrrXML.a: contrib/irrXML/CMakeFiles/IrrXML.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/vivasvan/Desktop/Projects/GLUT/assimp/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library ../../lib/libIrrXML.a"
	cd /home/vivasvan/Desktop/Projects/GLUT/assimp/contrib/irrXML && $(CMAKE_COMMAND) -P CMakeFiles/IrrXML.dir/cmake_clean_target.cmake
	cd /home/vivasvan/Desktop/Projects/GLUT/assimp/contrib/irrXML && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/IrrXML.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
contrib/irrXML/CMakeFiles/IrrXML.dir/build: lib/libIrrXML.a

.PHONY : contrib/irrXML/CMakeFiles/IrrXML.dir/build

contrib/irrXML/CMakeFiles/IrrXML.dir/requires: contrib/irrXML/CMakeFiles/IrrXML.dir/irrXML.cpp.o.requires

.PHONY : contrib/irrXML/CMakeFiles/IrrXML.dir/requires

contrib/irrXML/CMakeFiles/IrrXML.dir/clean:
	cd /home/vivasvan/Desktop/Projects/GLUT/assimp/contrib/irrXML && $(CMAKE_COMMAND) -P CMakeFiles/IrrXML.dir/cmake_clean.cmake
.PHONY : contrib/irrXML/CMakeFiles/IrrXML.dir/clean

contrib/irrXML/CMakeFiles/IrrXML.dir/depend:
	cd /home/vivasvan/Desktop/Projects/GLUT/assimp && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/vivasvan/Desktop/Projects/GLUT/assimp /home/vivasvan/Desktop/Projects/GLUT/assimp/contrib/irrXML /home/vivasvan/Desktop/Projects/GLUT/assimp /home/vivasvan/Desktop/Projects/GLUT/assimp/contrib/irrXML /home/vivasvan/Desktop/Projects/GLUT/assimp/contrib/irrXML/CMakeFiles/IrrXML.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : contrib/irrXML/CMakeFiles/IrrXML.dir/depend

