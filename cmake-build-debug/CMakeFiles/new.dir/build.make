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
include CMakeFiles/new.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/new.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/new.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/new.dir/flags.make

CMakeFiles/new.dir/main.cpp.obj: CMakeFiles/new.dir/flags.make
CMakeFiles/new.dir/main.cpp.obj: ../main.cpp
CMakeFiles/new.dir/main.cpp.obj: CMakeFiles/new.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Programming\CLionProjects\new\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/new.dir/main.cpp.obj"
	C:\Users\solop\msys64\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/new.dir/main.cpp.obj -MF CMakeFiles\new.dir\main.cpp.obj.d -o CMakeFiles\new.dir\main.cpp.obj -c D:\Programming\CLionProjects\new\main.cpp

CMakeFiles/new.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/new.dir/main.cpp.i"
	C:\Users\solop\msys64\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Programming\CLionProjects\new\main.cpp > CMakeFiles\new.dir\main.cpp.i

CMakeFiles/new.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/new.dir/main.cpp.s"
	C:\Users\solop\msys64\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Programming\CLionProjects\new\main.cpp -o CMakeFiles\new.dir\main.cpp.s

CMakeFiles/new.dir/Matrix.cpp.obj: CMakeFiles/new.dir/flags.make
CMakeFiles/new.dir/Matrix.cpp.obj: ../Matrix.cpp
CMakeFiles/new.dir/Matrix.cpp.obj: CMakeFiles/new.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Programming\CLionProjects\new\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/new.dir/Matrix.cpp.obj"
	C:\Users\solop\msys64\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/new.dir/Matrix.cpp.obj -MF CMakeFiles\new.dir\Matrix.cpp.obj.d -o CMakeFiles\new.dir\Matrix.cpp.obj -c D:\Programming\CLionProjects\new\Matrix.cpp

CMakeFiles/new.dir/Matrix.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/new.dir/Matrix.cpp.i"
	C:\Users\solop\msys64\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Programming\CLionProjects\new\Matrix.cpp > CMakeFiles\new.dir\Matrix.cpp.i

CMakeFiles/new.dir/Matrix.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/new.dir/Matrix.cpp.s"
	C:\Users\solop\msys64\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Programming\CLionProjects\new\Matrix.cpp -o CMakeFiles\new.dir\Matrix.cpp.s

# Object files for target new
new_OBJECTS = \
"CMakeFiles/new.dir/main.cpp.obj" \
"CMakeFiles/new.dir/Matrix.cpp.obj"

# External object files for target new
new_EXTERNAL_OBJECTS =

new.exe: CMakeFiles/new.dir/main.cpp.obj
new.exe: CMakeFiles/new.dir/Matrix.cpp.obj
new.exe: CMakeFiles/new.dir/build.make
new.exe: CMakeFiles/new.dir/linklibs.rsp
new.exe: CMakeFiles/new.dir/objects1.rsp
new.exe: CMakeFiles/new.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Programming\CLionProjects\new\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable new.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\new.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/new.dir/build: new.exe
.PHONY : CMakeFiles/new.dir/build

CMakeFiles/new.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\new.dir\cmake_clean.cmake
.PHONY : CMakeFiles/new.dir/clean

CMakeFiles/new.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Programming\CLionProjects\new D:\Programming\CLionProjects\new D:\Programming\CLionProjects\new\cmake-build-debug D:\Programming\CLionProjects\new\cmake-build-debug D:\Programming\CLionProjects\new\cmake-build-debug\CMakeFiles\new.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/new.dir/depend
