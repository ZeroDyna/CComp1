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
CMAKE_SOURCE_DIR = /home/delusion7/Documentos/Uni/ccomp/CComp1/2/2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/delusion7/Documentos/Uni/ccomp/CComp1/2/2/build

# Include any dependencies generated for this target.
include CMakeFiles/tarea2.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/tarea2.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/tarea2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/tarea2.dir/flags.make

CMakeFiles/tarea2.dir/tarea2.cpp.o: CMakeFiles/tarea2.dir/flags.make
CMakeFiles/tarea2.dir/tarea2.cpp.o: /home/delusion7/Documentos/Uni/ccomp/CComp1/2/2/tarea2.cpp
CMakeFiles/tarea2.dir/tarea2.cpp.o: CMakeFiles/tarea2.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/delusion7/Documentos/Uni/ccomp/CComp1/2/2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/tarea2.dir/tarea2.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/tarea2.dir/tarea2.cpp.o -MF CMakeFiles/tarea2.dir/tarea2.cpp.o.d -o CMakeFiles/tarea2.dir/tarea2.cpp.o -c /home/delusion7/Documentos/Uni/ccomp/CComp1/2/2/tarea2.cpp

CMakeFiles/tarea2.dir/tarea2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tarea2.dir/tarea2.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/delusion7/Documentos/Uni/ccomp/CComp1/2/2/tarea2.cpp > CMakeFiles/tarea2.dir/tarea2.cpp.i

CMakeFiles/tarea2.dir/tarea2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tarea2.dir/tarea2.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/delusion7/Documentos/Uni/ccomp/CComp1/2/2/tarea2.cpp -o CMakeFiles/tarea2.dir/tarea2.cpp.s

# Object files for target tarea2
tarea2_OBJECTS = \
"CMakeFiles/tarea2.dir/tarea2.cpp.o"

# External object files for target tarea2
tarea2_EXTERNAL_OBJECTS =

tarea2: CMakeFiles/tarea2.dir/tarea2.cpp.o
tarea2: CMakeFiles/tarea2.dir/build.make
tarea2: CMakeFiles/tarea2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/delusion7/Documentos/Uni/ccomp/CComp1/2/2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable tarea2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/tarea2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/tarea2.dir/build: tarea2
.PHONY : CMakeFiles/tarea2.dir/build

CMakeFiles/tarea2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/tarea2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/tarea2.dir/clean

CMakeFiles/tarea2.dir/depend:
	cd /home/delusion7/Documentos/Uni/ccomp/CComp1/2/2/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/delusion7/Documentos/Uni/ccomp/CComp1/2/2 /home/delusion7/Documentos/Uni/ccomp/CComp1/2/2 /home/delusion7/Documentos/Uni/ccomp/CComp1/2/2/build /home/delusion7/Documentos/Uni/ccomp/CComp1/2/2/build /home/delusion7/Documentos/Uni/ccomp/CComp1/2/2/build/CMakeFiles/tarea2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/tarea2.dir/depend

