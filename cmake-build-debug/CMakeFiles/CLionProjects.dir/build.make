# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.23

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\Users\solop\msys64\mingw64\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\solop\msys64\mingw64\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\Programming\CLionProjects\new

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\Programming\CLionProjects\new\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/CLionProjects.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/CLionProjects.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/CLionProjects.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CLionProjects.dir/flags.make

CMakeFiles/CLionProjects.dir/main.cpp.obj: CMakeFiles/CLionProjects.dir/flags.make
CMakeFiles/CLionProjects.dir/main.cpp.obj: ../main.cpp
CMakeFiles/CLionProjects.dir/main.cpp.obj: CMakeFiles/CLionProjects.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Programming\CLionProjects\new\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CLionProjects.dir/main.cpp.obj"
	C:\Users\solop\msys64\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/CLionProjects.dir/main.cpp.obj -MF CMakeFiles\CLionProjects.dir\main.cpp.obj.d -o CMakeFiles\CLionProjects.dir\main.cpp.obj -c D:\Programming\CLionProjects\new\main.cpp

CMakeFiles/CLionProjects.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CLionProjects.dir/main.cpp.i"
	C:\Users\solop\msys64\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Programming\CLionProjects\new\main.cpp > CMakeFiles\CLionProjects.dir\main.cpp.i

CMakeFiles/CLionProjects.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CLionProjects.dir/main.cpp.s"
	C:\Users\solop\msys64\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Programming\CLionProjects\new\main.cpp -o CMakeFiles\CLionProjects.dir\main.cpp.s

# Object files for target CLionProjects
CLionProjects_OBJECTS = \
"CMakeFiles/CLionProjects.dir/main.cpp.obj"

# External object files for target CLionProjects
CLionProjects_EXTERNAL_OBJECTS =

CLionProjects.exe: CMakeFiles/CLionProjects.dir/main.cpp.obj
CLionProjects.exe: CMakeFiles/CLionProjects.dir/build.make
CLionProjects.exe: CMakeFiles/CLionProjects.dir/linklibs.rsp
CLionProjects.exe: CMakeFiles/CLionProjects.dir/objects1.rsp
CLionProjects.exe: CMakeFiles/CLionProjects.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Programming\CLionProjects\new\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable CLionProjects.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\CLionProjects.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CLionProjects.dir/build: CLionProjects.exe
.PHONY : CMakeFiles/CLionProjects.dir/build

CMakeFiles/CLionProjects.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\CLionProjects.dir\cmake_clean.cmake
.PHONY : CMakeFiles/CLionProjects.dir/clean

CMakeFiles/CLionProjects.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Programming\CLionProjects\new D:\Programming\CLionProjects\new D:\Programming\CLionProjects\new\cmake-build-debug D:\Programming\CLionProjects\new\cmake-build-debug D:\Programming\CLionProjects\new\cmake-build-debug\CMakeFiles\CLionProjects.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/CLionProjects.dir/depend

