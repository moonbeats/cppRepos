# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "E:\CLion 2020.2.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "E:\CLion 2020.2.4\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\cppRepos\practiceContent\smartPointer

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\cppRepos\practiceContent\smartPointer\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/smartPointer.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/smartPointer.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/smartPointer.dir/flags.make

CMakeFiles/smartPointer.dir/main.cpp.obj: CMakeFiles/smartPointer.dir/flags.make
CMakeFiles/smartPointer.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\cppRepos\practiceContent\smartPointer\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/smartPointer.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\smartPointer.dir\main.cpp.obj -c D:\cppRepos\practiceContent\smartPointer\main.cpp

CMakeFiles/smartPointer.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/smartPointer.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\cppRepos\practiceContent\smartPointer\main.cpp > CMakeFiles\smartPointer.dir\main.cpp.i

CMakeFiles/smartPointer.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/smartPointer.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\cppRepos\practiceContent\smartPointer\main.cpp -o CMakeFiles\smartPointer.dir\main.cpp.s

# Object files for target smartPointer
smartPointer_OBJECTS = \
"CMakeFiles/smartPointer.dir/main.cpp.obj"

# External object files for target smartPointer
smartPointer_EXTERNAL_OBJECTS =

smartPointer.exe: CMakeFiles/smartPointer.dir/main.cpp.obj
smartPointer.exe: CMakeFiles/smartPointer.dir/build.make
smartPointer.exe: CMakeFiles/smartPointer.dir/linklibs.rsp
smartPointer.exe: CMakeFiles/smartPointer.dir/objects1.rsp
smartPointer.exe: CMakeFiles/smartPointer.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\cppRepos\practiceContent\smartPointer\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable smartPointer.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\smartPointer.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/smartPointer.dir/build: smartPointer.exe

.PHONY : CMakeFiles/smartPointer.dir/build

CMakeFiles/smartPointer.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\smartPointer.dir\cmake_clean.cmake
.PHONY : CMakeFiles/smartPointer.dir/clean

CMakeFiles/smartPointer.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\cppRepos\practiceContent\smartPointer D:\cppRepos\practiceContent\smartPointer D:\cppRepos\practiceContent\smartPointer\cmake-build-debug D:\cppRepos\practiceContent\smartPointer\cmake-build-debug D:\cppRepos\practiceContent\smartPointer\cmake-build-debug\CMakeFiles\smartPointer.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/smartPointer.dir/depend

