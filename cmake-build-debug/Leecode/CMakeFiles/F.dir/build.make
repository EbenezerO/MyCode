# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.14

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\Clion\CLion 2019.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\Clion\CLion 2019.2\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = E:\Leecode_offer\MyCode

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\Leecode_offer\MyCode\cmake-build-debug

# Include any dependencies generated for this target.
include Leecode/CMakeFiles/F.dir/depend.make

# Include the progress variables for this target.
include Leecode/CMakeFiles/F.dir/progress.make

# Include the compile flags for this target's objects.
include Leecode/CMakeFiles/F.dir/flags.make

Leecode/CMakeFiles/F.dir/movingCount.cpp.obj: Leecode/CMakeFiles/F.dir/flags.make
Leecode/CMakeFiles/F.dir/movingCount.cpp.obj: ../Leecode/movingCount.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\Leecode_offer\MyCode\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Leecode/CMakeFiles/F.dir/movingCount.cpp.obj"
	cd /d E:\Leecode_offer\MyCode\cmake-build-debug\Leecode && D:\Clion\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\F.dir\movingCount.cpp.obj -c E:\Leecode_offer\MyCode\Leecode\movingCount.cpp

Leecode/CMakeFiles/F.dir/movingCount.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/F.dir/movingCount.cpp.i"
	cd /d E:\Leecode_offer\MyCode\cmake-build-debug\Leecode && D:\Clion\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\Leecode_offer\MyCode\Leecode\movingCount.cpp > CMakeFiles\F.dir\movingCount.cpp.i

Leecode/CMakeFiles/F.dir/movingCount.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/F.dir/movingCount.cpp.s"
	cd /d E:\Leecode_offer\MyCode\cmake-build-debug\Leecode && D:\Clion\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\Leecode_offer\MyCode\Leecode\movingCount.cpp -o CMakeFiles\F.dir\movingCount.cpp.s

# Object files for target F
F_OBJECTS = \
"CMakeFiles/F.dir/movingCount.cpp.obj"

# External object files for target F
F_EXTERNAL_OBJECTS =

Leecode/F.exe: Leecode/CMakeFiles/F.dir/movingCount.cpp.obj
Leecode/F.exe: Leecode/CMakeFiles/F.dir/build.make
Leecode/F.exe: Leecode/CMakeFiles/F.dir/linklibs.rsp
Leecode/F.exe: Leecode/CMakeFiles/F.dir/objects1.rsp
Leecode/F.exe: Leecode/CMakeFiles/F.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\Leecode_offer\MyCode\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable F.exe"
	cd /d E:\Leecode_offer\MyCode\cmake-build-debug\Leecode && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\F.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Leecode/CMakeFiles/F.dir/build: Leecode/F.exe

.PHONY : Leecode/CMakeFiles/F.dir/build

Leecode/CMakeFiles/F.dir/clean:
	cd /d E:\Leecode_offer\MyCode\cmake-build-debug\Leecode && $(CMAKE_COMMAND) -P CMakeFiles\F.dir\cmake_clean.cmake
.PHONY : Leecode/CMakeFiles/F.dir/clean

Leecode/CMakeFiles/F.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\Leecode_offer\MyCode E:\Leecode_offer\MyCode\Leecode E:\Leecode_offer\MyCode\cmake-build-debug E:\Leecode_offer\MyCode\cmake-build-debug\Leecode E:\Leecode_offer\MyCode\cmake-build-debug\Leecode\CMakeFiles\F.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : Leecode/CMakeFiles/F.dir/depend

