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
include Leecode/CMakeFiles/A.dir/depend.make

# Include the progress variables for this target.
include Leecode/CMakeFiles/A.dir/progress.make

# Include the compile flags for this target's objects.
include Leecode/CMakeFiles/A.dir/flags.make

Leecode/CMakeFiles/A.dir/sheep.cpp.obj: Leecode/CMakeFiles/A.dir/flags.make
Leecode/CMakeFiles/A.dir/sheep.cpp.obj: ../Leecode/sheep.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\Leecode_offer\MyCode\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Leecode/CMakeFiles/A.dir/sheep.cpp.obj"
	cd /d E:\Leecode_offer\MyCode\cmake-build-debug\Leecode && D:\Clion\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\A.dir\sheep.cpp.obj -c E:\Leecode_offer\MyCode\Leecode\sheep.cpp

Leecode/CMakeFiles/A.dir/sheep.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/A.dir/sheep.cpp.i"
	cd /d E:\Leecode_offer\MyCode\cmake-build-debug\Leecode && D:\Clion\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\Leecode_offer\MyCode\Leecode\sheep.cpp > CMakeFiles\A.dir\sheep.cpp.i

Leecode/CMakeFiles/A.dir/sheep.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/A.dir/sheep.cpp.s"
	cd /d E:\Leecode_offer\MyCode\cmake-build-debug\Leecode && D:\Clion\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\Leecode_offer\MyCode\Leecode\sheep.cpp -o CMakeFiles\A.dir\sheep.cpp.s

Leecode/CMakeFiles/A.dir/killMaster.cpp.obj: Leecode/CMakeFiles/A.dir/flags.make
Leecode/CMakeFiles/A.dir/killMaster.cpp.obj: ../Leecode/killMaster.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\Leecode_offer\MyCode\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object Leecode/CMakeFiles/A.dir/killMaster.cpp.obj"
	cd /d E:\Leecode_offer\MyCode\cmake-build-debug\Leecode && D:\Clion\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\A.dir\killMaster.cpp.obj -c E:\Leecode_offer\MyCode\Leecode\killMaster.cpp

Leecode/CMakeFiles/A.dir/killMaster.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/A.dir/killMaster.cpp.i"
	cd /d E:\Leecode_offer\MyCode\cmake-build-debug\Leecode && D:\Clion\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\Leecode_offer\MyCode\Leecode\killMaster.cpp > CMakeFiles\A.dir\killMaster.cpp.i

Leecode/CMakeFiles/A.dir/killMaster.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/A.dir/killMaster.cpp.s"
	cd /d E:\Leecode_offer\MyCode\cmake-build-debug\Leecode && D:\Clion\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\Leecode_offer\MyCode\Leecode\killMaster.cpp -o CMakeFiles\A.dir\killMaster.cpp.s

# Object files for target A
A_OBJECTS = \
"CMakeFiles/A.dir/sheep.cpp.obj" \
"CMakeFiles/A.dir/killMaster.cpp.obj"

# External object files for target A
A_EXTERNAL_OBJECTS =

Leecode/A.exe: Leecode/CMakeFiles/A.dir/sheep.cpp.obj
Leecode/A.exe: Leecode/CMakeFiles/A.dir/killMaster.cpp.obj
Leecode/A.exe: Leecode/CMakeFiles/A.dir/build.make
Leecode/A.exe: Leecode/CMakeFiles/A.dir/linklibs.rsp
Leecode/A.exe: Leecode/CMakeFiles/A.dir/objects1.rsp
Leecode/A.exe: Leecode/CMakeFiles/A.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\Leecode_offer\MyCode\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable A.exe"
	cd /d E:\Leecode_offer\MyCode\cmake-build-debug\Leecode && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\A.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Leecode/CMakeFiles/A.dir/build: Leecode/A.exe

.PHONY : Leecode/CMakeFiles/A.dir/build

Leecode/CMakeFiles/A.dir/clean:
	cd /d E:\Leecode_offer\MyCode\cmake-build-debug\Leecode && $(CMAKE_COMMAND) -P CMakeFiles\A.dir\cmake_clean.cmake
.PHONY : Leecode/CMakeFiles/A.dir/clean

Leecode/CMakeFiles/A.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\Leecode_offer\MyCode E:\Leecode_offer\MyCode\Leecode E:\Leecode_offer\MyCode\cmake-build-debug E:\Leecode_offer\MyCode\cmake-build-debug\Leecode E:\Leecode_offer\MyCode\cmake-build-debug\Leecode\CMakeFiles\A.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : Leecode/CMakeFiles/A.dir/depend

