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
CMAKE_SOURCE_DIR = /home/delusion7/Documentos/Uni/ccomp/CComp1/2/6

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/delusion7/Documentos/Uni/ccomp/CComp1/2/6/build

# Include any dependencies generated for this target.
include CMakeFiles/tarea6.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/tarea6.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/tarea6.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/tarea6.dir/flags.make

CMakeFiles/tarea6.dir/tarea6.cpp.o: CMakeFiles/tarea6.dir/flags.make
CMakeFiles/tarea6.dir/tarea6.cpp.o: /home/delusion7/Documentos/Uni/ccomp/CComp1/2/6/tarea6.cpp
CMakeFiles/tarea6.dir/tarea6.cpp.o: CMakeFiles/tarea6.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/delusion7/Documentos/Uni/ccomp/CComp1/2/6/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/tarea6.dir/tarea6.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/tarea6.dir/tarea6.cpp.o -MF CMakeFiles/tarea6.dir/tarea6.cpp.o.d -o CMakeFiles/tarea6.dir/tarea6.cpp.o -c /home/delusion7/Documentos/Uni/ccomp/CComp1/2/6/tarea6.cpp

CMakeFiles/tarea6.dir/tarea6.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tarea6.dir/tarea6.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/delusion7/Documentos/Uni/ccomp/CComp1/2/6/tarea6.cpp > CMakeFiles/tarea6.dir/tarea6.cpp.i

CMakeFiles/tarea6.dir/tarea6.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tarea6.dir/tarea6.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/delusion7/Documentos/Uni/ccomp/CComp1/2/6/tarea6.cpp -o CMakeFiles/tarea6.dir/tarea6.cpp.s

# Object files for target tarea6
tarea6_OBJECTS = \
"CMakeFiles/tarea6.dir/tarea6.cpp.o"

# External object files for target tarea6
tarea6_EXTERNAL_OBJECTS =

tarea6: CMakeFiles/tarea6.dir/tarea6.cpp.o
tarea6: CMakeFiles/tarea6.dir/build.make
tarea6: CMakeFiles/tarea6.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/delusion7/Documentos/Uni/ccomp/CComp1/2/6/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable tarea6"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/tarea6.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/tarea6.dir/build: tarea6
.PHONY : CMakeFiles/tarea6.dir/build

CMakeFiles/tarea6.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/tarea6.dir/cmake_clean.cmake
.PHONY : CMakeFiles/tarea6.dir/clean

CMakeFiles/tarea6.dir/depend:
	cd /home/delusion7/Documentos/Uni/ccomp/CComp1/2/6/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/delusion7/Documentos/Uni/ccomp/CComp1/2/6 /home/delusion7/Documentos/Uni/ccomp/CComp1/2/6 /home/delusion7/Documentos/Uni/ccomp/CComp1/2/6/build /home/delusion7/Documentos/Uni/ccomp/CComp1/2/6/build /home/delusion7/Documentos/Uni/ccomp/CComp1/2/6/build/CMakeFiles/tarea6.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/tarea6.dir/depend

