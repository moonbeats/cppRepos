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
CMAKE_SOURCE_DIR = D:\cppRepos\STL\list\sLinkList

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\cppRepos\STL\list\sLinkList\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/sLinkList.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/sLinkList.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/sLinkList.dir/flags.make

CMakeFiles/sLinkList.dir/main.cpp.obj: CMakeFiles/sLinkList.dir/flags.make
CMakeFiles/sLinkList.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\cppRepos\STL\list\sLinkList\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/sLinkList.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\sLinkList.dir\main.cpp.obj -c D:\cppRepos\STL\list\sLinkList\main.cpp

CMakeFiles/sLinkList.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sLinkList.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\cppRepos\STL\list\sLinkList\main.cpp > CMakeFiles\sLinkList.dir\main.cpp.i

CMakeFiles/sLinkList.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sLinkList.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\cppRepos\STL\list\sLinkList\main.cpp -o CMakeFiles\sLinkList.dir\main.cpp.s

# Object files for target sLinkList
sLinkList_OBJECTS = \
"CMakeFiles/sLinkList.dir/main.cpp.obj"

# External object files for target sLinkList
sLinkList_EXTERNAL_OBJECTS =

sLinkList.exe: CMakeFiles/sLinkList.dir/main.cpp.obj
sLinkList.exe: CMakeFiles/sLinkList.dir/build.make
sLinkList.exe: CMakeFiles/sLinkList.dir/linklibs.rsp
sLinkList.exe: CMakeFiles/sLinkList.dir/objects1.rsp
sLinkList.exe: CMakeFiles/sLinkList.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\cppRepos\STL\list\sLinkList\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable sLinkList.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\sLinkList.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/sLinkList.dir/build: sLinkList.exe

.PHONY : CMakeFiles/sLinkList.dir/build

CMakeFiles/sLinkList.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\sLinkList.dir\cmake_clean.cmake
.PHONY : CMakeFiles/sLinkList.dir/clean

CMakeFiles/sLinkList.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\cppRepos\STL\list\sLinkList D:\cppRepos\STL\list\sLinkList D:\cppRepos\STL\list\sLinkList\cmake-build-debug D:\cppRepos\STL\list\sLinkList\cmake-build-debug D:\cppRepos\STL\list\sLinkList\cmake-build-debug\CMakeFiles\sLinkList.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/sLinkList.dir/depend

