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
CMAKE_SOURCE_DIR = D:\cppRepos\c++Boost\test

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\cppRepos\c++Boost\test\cmake-build-debug

# Include any dependencies generated for this target.
include TargetLib/CMakeFiles/TargetLib.dir/depend.make

# Include the progress variables for this target.
include TargetLib/CMakeFiles/TargetLib.dir/progress.make

# Include the compile flags for this target's objects.
include TargetLib/CMakeFiles/TargetLib.dir/flags.make

TargetLib/CMakeFiles/TargetLib.dir/calculator.cpp.obj: TargetLib/CMakeFiles/TargetLib.dir/flags.make
TargetLib/CMakeFiles/TargetLib.dir/calculator.cpp.obj: TargetLib/CMakeFiles/TargetLib.dir/includes_CXX.rsp
TargetLib/CMakeFiles/TargetLib.dir/calculator.cpp.obj: ../TargetLib/calculator.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\cppRepos\c++Boost\test\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object TargetLib/CMakeFiles/TargetLib.dir/calculator.cpp.obj"
	cd /d D:\cppRepos\c++Boost\test\cmake-build-debug\TargetLib && C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\TargetLib.dir\calculator.cpp.obj -c D:\cppRepos\c++Boost\test\TargetLib\calculator.cpp

TargetLib/CMakeFiles/TargetLib.dir/calculator.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TargetLib.dir/calculator.cpp.i"
	cd /d D:\cppRepos\c++Boost\test\cmake-build-debug\TargetLib && C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\cppRepos\c++Boost\test\TargetLib\calculator.cpp > CMakeFiles\TargetLib.dir\calculator.cpp.i

TargetLib/CMakeFiles/TargetLib.dir/calculator.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TargetLib.dir/calculator.cpp.s"
	cd /d D:\cppRepos\c++Boost\test\cmake-build-debug\TargetLib && C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\cppRepos\c++Boost\test\TargetLib\calculator.cpp -o CMakeFiles\TargetLib.dir\calculator.cpp.s

# Object files for target TargetLib
TargetLib_OBJECTS = \
"CMakeFiles/TargetLib.dir/calculator.cpp.obj"

# External object files for target TargetLib
TargetLib_EXTERNAL_OBJECTS =

TargetLib/libTargetLib.a: TargetLib/CMakeFiles/TargetLib.dir/calculator.cpp.obj
TargetLib/libTargetLib.a: TargetLib/CMakeFiles/TargetLib.dir/build.make
TargetLib/libTargetLib.a: TargetLib/CMakeFiles/TargetLib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\cppRepos\c++Boost\test\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libTargetLib.a"
	cd /d D:\cppRepos\c++Boost\test\cmake-build-debug\TargetLib && $(CMAKE_COMMAND) -P CMakeFiles\TargetLib.dir\cmake_clean_target.cmake
	cd /d D:\cppRepos\c++Boost\test\cmake-build-debug\TargetLib && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\TargetLib.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
TargetLib/CMakeFiles/TargetLib.dir/build: TargetLib/libTargetLib.a

.PHONY : TargetLib/CMakeFiles/TargetLib.dir/build

TargetLib/CMakeFiles/TargetLib.dir/clean:
	cd /d D:\cppRepos\c++Boost\test\cmake-build-debug\TargetLib && $(CMAKE_COMMAND) -P CMakeFiles\TargetLib.dir\cmake_clean.cmake
.PHONY : TargetLib/CMakeFiles/TargetLib.dir/clean

TargetLib/CMakeFiles/TargetLib.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\cppRepos\c++Boost\test D:\cppRepos\c++Boost\test\TargetLib D:\cppRepos\c++Boost\test\cmake-build-debug D:\cppRepos\c++Boost\test\cmake-build-debug\TargetLib D:\cppRepos\c++Boost\test\cmake-build-debug\TargetLib\CMakeFiles\TargetLib.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : TargetLib/CMakeFiles/TargetLib.dir/depend

