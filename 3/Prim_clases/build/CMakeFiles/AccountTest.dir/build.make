# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.25

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
CMAKE_COMMAND = /opt/cmake/bin/cmake

# The command to remove a file.
RM = /opt/cmake/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/delusion7/Documentos/Uni/ccomp/CComp1/3/Prim_clases

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/delusion7/Documentos/Uni/ccomp/CComp1/3/Prim_clases/build

# Include any dependencies generated for this target.
include CMakeFiles/AccountTest.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/AccountTest.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/AccountTest.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/AccountTest.dir/flags.make

CMakeFiles/AccountTest.dir/AccountTest.cpp.o: CMakeFiles/AccountTest.dir/flags.make
CMakeFiles/AccountTest.dir/AccountTest.cpp.o: /home/delusion7/Documentos/Uni/ccomp/CComp1/3/Prim_clases/AccountTest.cpp
CMakeFiles/AccountTest.dir/AccountTest.cpp.o: CMakeFiles/AccountTest.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/delusion7/Documentos/Uni/ccomp/CComp1/3/Prim_clases/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/AccountTest.dir/AccountTest.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/AccountTest.dir/AccountTest.cpp.o -MF CMakeFiles/AccountTest.dir/AccountTest.cpp.o.d -o CMakeFiles/AccountTest.dir/AccountTest.cpp.o -c /home/delusion7/Documentos/Uni/ccomp/CComp1/3/Prim_clases/AccountTest.cpp

CMakeFiles/AccountTest.dir/AccountTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AccountTest.dir/AccountTest.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/delusion7/Documentos/Uni/ccomp/CComp1/3/Prim_clases/AccountTest.cpp > CMakeFiles/AccountTest.dir/AccountTest.cpp.i

CMakeFiles/AccountTest.dir/AccountTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AccountTest.dir/AccountTest.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/delusion7/Documentos/Uni/ccomp/CComp1/3/Prim_clases/AccountTest.cpp -o CMakeFiles/AccountTest.dir/AccountTest.cpp.s

# Object files for target AccountTest
AccountTest_OBJECTS = \
"CMakeFiles/AccountTest.dir/AccountTest.cpp.o"

# External object files for target AccountTest
AccountTest_EXTERNAL_OBJECTS =

AccountTest: CMakeFiles/AccountTest.dir/AccountTest.cpp.o
AccountTest: CMakeFiles/AccountTest.dir/build.make
AccountTest: CMakeFiles/AccountTest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/delusion7/Documentos/Uni/ccomp/CComp1/3/Prim_clases/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable AccountTest"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/AccountTest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/AccountTest.dir/build: AccountTest
.PHONY : CMakeFiles/AccountTest.dir/build

CMakeFiles/AccountTest.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/AccountTest.dir/cmake_clean.cmake
.PHONY : CMakeFiles/AccountTest.dir/clean

CMakeFiles/AccountTest.dir/depend:
	cd /home/delusion7/Documentos/Uni/ccomp/CComp1/3/Prim_clases/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/delusion7/Documentos/Uni/ccomp/CComp1/3/Prim_clases /home/delusion7/Documentos/Uni/ccomp/CComp1/3/Prim_clases /home/delusion7/Documentos/Uni/ccomp/CComp1/3/Prim_clases/build /home/delusion7/Documentos/Uni/ccomp/CComp1/3/Prim_clases/build /home/delusion7/Documentos/Uni/ccomp/CComp1/3/Prim_clases/build/CMakeFiles/AccountTest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/AccountTest.dir/depend

