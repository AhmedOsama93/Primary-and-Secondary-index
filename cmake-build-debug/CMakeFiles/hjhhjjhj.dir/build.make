# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.2.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.2.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "D:\3rd year 1st Term\Files\Labs\hjhhjjhj"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\3rd year 1st Term\Files\Labs\hjhhjjhj\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/hjhhjjhj.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/hjhhjjhj.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/hjhhjjhj.dir/flags.make

CMakeFiles/hjhhjjhj.dir/main.cpp.obj: CMakeFiles/hjhhjjhj.dir/flags.make
CMakeFiles/hjhhjjhj.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\3rd year 1st Term\Files\Labs\hjhhjjhj\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/hjhhjjhj.dir/main.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\hjhhjjhj.dir\main.cpp.obj -c "D:\3rd year 1st Term\Files\Labs\hjhhjjhj\main.cpp"

CMakeFiles/hjhhjjhj.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hjhhjjhj.dir/main.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\3rd year 1st Term\Files\Labs\hjhhjjhj\main.cpp" > CMakeFiles\hjhhjjhj.dir\main.cpp.i

CMakeFiles/hjhhjjhj.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hjhhjjhj.dir/main.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\3rd year 1st Term\Files\Labs\hjhhjjhj\main.cpp" -o CMakeFiles\hjhhjjhj.dir\main.cpp.s

# Object files for target hjhhjjhj
hjhhjjhj_OBJECTS = \
"CMakeFiles/hjhhjjhj.dir/main.cpp.obj"

# External object files for target hjhhjjhj
hjhhjjhj_EXTERNAL_OBJECTS =

hjhhjjhj.exe: CMakeFiles/hjhhjjhj.dir/main.cpp.obj
hjhhjjhj.exe: CMakeFiles/hjhhjjhj.dir/build.make
hjhhjjhj.exe: CMakeFiles/hjhhjjhj.dir/linklibs.rsp
hjhhjjhj.exe: CMakeFiles/hjhhjjhj.dir/objects1.rsp
hjhhjjhj.exe: CMakeFiles/hjhhjjhj.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\3rd year 1st Term\Files\Labs\hjhhjjhj\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable hjhhjjhj.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\hjhhjjhj.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/hjhhjjhj.dir/build: hjhhjjhj.exe
.PHONY : CMakeFiles/hjhhjjhj.dir/build

CMakeFiles/hjhhjjhj.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\hjhhjjhj.dir\cmake_clean.cmake
.PHONY : CMakeFiles/hjhhjjhj.dir/clean

CMakeFiles/hjhhjjhj.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\3rd year 1st Term\Files\Labs\hjhhjjhj" "D:\3rd year 1st Term\Files\Labs\hjhhjjhj" "D:\3rd year 1st Term\Files\Labs\hjhhjjhj\cmake-build-debug" "D:\3rd year 1st Term\Files\Labs\hjhhjjhj\cmake-build-debug" "D:\3rd year 1st Term\Files\Labs\hjhhjjhj\cmake-build-debug\CMakeFiles\hjhhjjhj.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/hjhhjjhj.dir/depend
