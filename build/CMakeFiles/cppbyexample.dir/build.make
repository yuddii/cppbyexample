# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.31

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
CMAKE_COMMAND = D:\software\Cmake\bin\cmake.exe

# The command to remove a file.
RM = D:\software\Cmake\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = E:\program\cppbyexample

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\program\cppbyexample\build

# Include any dependencies generated for this target.
include CMakeFiles/cppbyexample.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/cppbyexample.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/cppbyexample.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cppbyexample.dir/flags.make

CMakeFiles/cppbyexample.dir/codegen:
.PHONY : CMakeFiles/cppbyexample.dir/codegen

CMakeFiles/cppbyexample.dir/src/simple/main.cpp.obj: CMakeFiles/cppbyexample.dir/flags.make
CMakeFiles/cppbyexample.dir/src/simple/main.cpp.obj: E:/program/cppbyexample/src/simple/main.cpp
CMakeFiles/cppbyexample.dir/src/simple/main.cpp.obj: CMakeFiles/cppbyexample.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=E:\program\cppbyexample\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/cppbyexample.dir/src/simple/main.cpp.obj"
	E:\mingw64\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/cppbyexample.dir/src/simple/main.cpp.obj -MF CMakeFiles\cppbyexample.dir\src\simple\main.cpp.obj.d -o CMakeFiles\cppbyexample.dir\src\simple\main.cpp.obj -c E:\program\cppbyexample\src\simple\main.cpp

CMakeFiles/cppbyexample.dir/src/simple/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/cppbyexample.dir/src/simple/main.cpp.i"
	E:\mingw64\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\program\cppbyexample\src\simple\main.cpp > CMakeFiles\cppbyexample.dir\src\simple\main.cpp.i

CMakeFiles/cppbyexample.dir/src/simple/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/cppbyexample.dir/src/simple/main.cpp.s"
	E:\mingw64\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\program\cppbyexample\src\simple\main.cpp -o CMakeFiles\cppbyexample.dir\src\simple\main.cpp.s

CMakeFiles/cppbyexample.dir/src/simple/event_thread.cpp.obj: CMakeFiles/cppbyexample.dir/flags.make
CMakeFiles/cppbyexample.dir/src/simple/event_thread.cpp.obj: E:/program/cppbyexample/src/simple/event_thread.cpp
CMakeFiles/cppbyexample.dir/src/simple/event_thread.cpp.obj: CMakeFiles/cppbyexample.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=E:\program\cppbyexample\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/cppbyexample.dir/src/simple/event_thread.cpp.obj"
	E:\mingw64\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/cppbyexample.dir/src/simple/event_thread.cpp.obj -MF CMakeFiles\cppbyexample.dir\src\simple\event_thread.cpp.obj.d -o CMakeFiles\cppbyexample.dir\src\simple\event_thread.cpp.obj -c E:\program\cppbyexample\src\simple\event_thread.cpp

CMakeFiles/cppbyexample.dir/src/simple/event_thread.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/cppbyexample.dir/src/simple/event_thread.cpp.i"
	E:\mingw64\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\program\cppbyexample\src\simple\event_thread.cpp > CMakeFiles\cppbyexample.dir\src\simple\event_thread.cpp.i

CMakeFiles/cppbyexample.dir/src/simple/event_thread.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/cppbyexample.dir/src/simple/event_thread.cpp.s"
	E:\mingw64\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\program\cppbyexample\src\simple\event_thread.cpp -o CMakeFiles\cppbyexample.dir\src\simple\event_thread.cpp.s

CMakeFiles/cppbyexample.dir/src/simple/task.cpp.obj: CMakeFiles/cppbyexample.dir/flags.make
CMakeFiles/cppbyexample.dir/src/simple/task.cpp.obj: E:/program/cppbyexample/src/simple/task.cpp
CMakeFiles/cppbyexample.dir/src/simple/task.cpp.obj: CMakeFiles/cppbyexample.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=E:\program\cppbyexample\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/cppbyexample.dir/src/simple/task.cpp.obj"
	E:\mingw64\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/cppbyexample.dir/src/simple/task.cpp.obj -MF CMakeFiles\cppbyexample.dir\src\simple\task.cpp.obj.d -o CMakeFiles\cppbyexample.dir\src\simple\task.cpp.obj -c E:\program\cppbyexample\src\simple\task.cpp

CMakeFiles/cppbyexample.dir/src/simple/task.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/cppbyexample.dir/src/simple/task.cpp.i"
	E:\mingw64\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\program\cppbyexample\src\simple\task.cpp > CMakeFiles\cppbyexample.dir\src\simple\task.cpp.i

CMakeFiles/cppbyexample.dir/src/simple/task.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/cppbyexample.dir/src/simple/task.cpp.s"
	E:\mingw64\mingw64\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\program\cppbyexample\src\simple\task.cpp -o CMakeFiles\cppbyexample.dir\src\simple\task.cpp.s

# Object files for target cppbyexample
cppbyexample_OBJECTS = \
"CMakeFiles/cppbyexample.dir/src/simple/main.cpp.obj" \
"CMakeFiles/cppbyexample.dir/src/simple/event_thread.cpp.obj" \
"CMakeFiles/cppbyexample.dir/src/simple/task.cpp.obj"

# External object files for target cppbyexample
cppbyexample_EXTERNAL_OBJECTS =

cppbyexample.exe: CMakeFiles/cppbyexample.dir/src/simple/main.cpp.obj
cppbyexample.exe: CMakeFiles/cppbyexample.dir/src/simple/event_thread.cpp.obj
cppbyexample.exe: CMakeFiles/cppbyexample.dir/src/simple/task.cpp.obj
cppbyexample.exe: CMakeFiles/cppbyexample.dir/build.make
cppbyexample.exe: CMakeFiles/cppbyexample.dir/linkLibs.rsp
cppbyexample.exe: CMakeFiles/cppbyexample.dir/objects1.rsp
cppbyexample.exe: CMakeFiles/cppbyexample.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=E:\program\cppbyexample\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable cppbyexample.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\cppbyexample.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cppbyexample.dir/build: cppbyexample.exe
.PHONY : CMakeFiles/cppbyexample.dir/build

CMakeFiles/cppbyexample.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\cppbyexample.dir\cmake_clean.cmake
.PHONY : CMakeFiles/cppbyexample.dir/clean

CMakeFiles/cppbyexample.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\program\cppbyexample E:\program\cppbyexample E:\program\cppbyexample\build E:\program\cppbyexample\build E:\program\cppbyexample\build\CMakeFiles\cppbyexample.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/cppbyexample.dir/depend

