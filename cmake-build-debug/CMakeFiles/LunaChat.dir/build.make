# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /opt/clion-2019.2/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /opt/clion-2019.2/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/lucas/projetos/LunaChat

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/lucas/projetos/LunaChat/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/LunaChat.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/LunaChat.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/LunaChat.dir/flags.make

CMakeFiles/LunaChat.dir/src/lunaserver/Server.cpp.o: CMakeFiles/LunaChat.dir/flags.make
CMakeFiles/LunaChat.dir/src/lunaserver/Server.cpp.o: ../src/lunaserver/Server.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lucas/projetos/LunaChat/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/LunaChat.dir/src/lunaserver/Server.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LunaChat.dir/src/lunaserver/Server.cpp.o -c /home/lucas/projetos/LunaChat/src/lunaserver/Server.cpp

CMakeFiles/LunaChat.dir/src/lunaserver/Server.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LunaChat.dir/src/lunaserver/Server.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lucas/projetos/LunaChat/src/lunaserver/Server.cpp > CMakeFiles/LunaChat.dir/src/lunaserver/Server.cpp.i

CMakeFiles/LunaChat.dir/src/lunaserver/Server.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LunaChat.dir/src/lunaserver/Server.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lucas/projetos/LunaChat/src/lunaserver/Server.cpp -o CMakeFiles/LunaChat.dir/src/lunaserver/Server.cpp.s

CMakeFiles/LunaChat.dir/src/lunaserver/HttpSession.cpp.o: CMakeFiles/LunaChat.dir/flags.make
CMakeFiles/LunaChat.dir/src/lunaserver/HttpSession.cpp.o: ../src/lunaserver/HttpSession.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lucas/projetos/LunaChat/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/LunaChat.dir/src/lunaserver/HttpSession.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LunaChat.dir/src/lunaserver/HttpSession.cpp.o -c /home/lucas/projetos/LunaChat/src/lunaserver/HttpSession.cpp

CMakeFiles/LunaChat.dir/src/lunaserver/HttpSession.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LunaChat.dir/src/lunaserver/HttpSession.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lucas/projetos/LunaChat/src/lunaserver/HttpSession.cpp > CMakeFiles/LunaChat.dir/src/lunaserver/HttpSession.cpp.i

CMakeFiles/LunaChat.dir/src/lunaserver/HttpSession.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LunaChat.dir/src/lunaserver/HttpSession.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lucas/projetos/LunaChat/src/lunaserver/HttpSession.cpp -o CMakeFiles/LunaChat.dir/src/lunaserver/HttpSession.cpp.s

CMakeFiles/LunaChat.dir/src/main.cpp.o: CMakeFiles/LunaChat.dir/flags.make
CMakeFiles/LunaChat.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lucas/projetos/LunaChat/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/LunaChat.dir/src/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LunaChat.dir/src/main.cpp.o -c /home/lucas/projetos/LunaChat/src/main.cpp

CMakeFiles/LunaChat.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LunaChat.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lucas/projetos/LunaChat/src/main.cpp > CMakeFiles/LunaChat.dir/src/main.cpp.i

CMakeFiles/LunaChat.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LunaChat.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lucas/projetos/LunaChat/src/main.cpp -o CMakeFiles/LunaChat.dir/src/main.cpp.s

# Object files for target LunaChat
LunaChat_OBJECTS = \
"CMakeFiles/LunaChat.dir/src/lunaserver/Server.cpp.o" \
"CMakeFiles/LunaChat.dir/src/lunaserver/HttpSession.cpp.o" \
"CMakeFiles/LunaChat.dir/src/main.cpp.o"

# External object files for target LunaChat
LunaChat_EXTERNAL_OBJECTS =

bin/LunaChat: CMakeFiles/LunaChat.dir/src/lunaserver/Server.cpp.o
bin/LunaChat: CMakeFiles/LunaChat.dir/src/lunaserver/HttpSession.cpp.o
bin/LunaChat: CMakeFiles/LunaChat.dir/src/main.cpp.o
bin/LunaChat: CMakeFiles/LunaChat.dir/build.make
bin/LunaChat: CMakeFiles/LunaChat.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/lucas/projetos/LunaChat/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable bin/LunaChat"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LunaChat.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/LunaChat.dir/build: bin/LunaChat

.PHONY : CMakeFiles/LunaChat.dir/build

CMakeFiles/LunaChat.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/LunaChat.dir/cmake_clean.cmake
.PHONY : CMakeFiles/LunaChat.dir/clean

CMakeFiles/LunaChat.dir/depend:
	cd /home/lucas/projetos/LunaChat/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/lucas/projetos/LunaChat /home/lucas/projetos/LunaChat /home/lucas/projetos/LunaChat/cmake-build-debug /home/lucas/projetos/LunaChat/cmake-build-debug /home/lucas/projetos/LunaChat/cmake-build-debug/CMakeFiles/LunaChat.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/LunaChat.dir/depend

