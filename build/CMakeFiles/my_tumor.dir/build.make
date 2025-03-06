# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.19

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ale/biodynamo-v1.05.125/demo/my_tumor

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ale/biodynamo-v1.05.125/demo/my_tumor/build

# Include any dependencies generated for this target.
include CMakeFiles/my_tumor.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/my_tumor.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/my_tumor.dir/flags.make

libmy_tumor_dict.cc: ../src/brownian.h
libmy_tumor_dict.cc: ../src/my_tumor.h
libmy_tumor_dict.cc: /home/ale/biodynamo-v1.05.125/share/cmake/selection.xml
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/ale/biodynamo-v1.05.125/demo/my_tumor/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating libmy_tumor_dict.cc, libmy_tumor_dict_rdict.pcm"
	/home/ale/biodynamo-v1.05.125/third_party/root/bin/genreflex /home/ale/biodynamo-v1.05.125/demo/my_tumor/src/brownian.h /home/ale/biodynamo-v1.05.125/demo/my_tumor/src/my_tumor.h -o /home/ale/biodynamo-v1.05.125/demo/my_tumor/build/libmy_tumor_dict.cc --select=/home/ale/biodynamo-v1.05.125/share/cmake/selection.xml --noIncludePaths -I/usr/lib/x86_64-linux-gnu/openmpi/include -I/usr/lib/x86_64-linux-gnu/openmpi/include/openmpi -I/usr/include -I/home/ale/biodynamo-v1.05.125/third_party/root/include -I/home/ale/biodynamo-v1.05.125/demo/my_tumor/build/omp -I/home/ale/biodynamo-v1.05.125/include -I/home/ale/biodynamo-v1.05.125/include/optim -I/home/ale/biodynamo-v1.05.125/demo/my_tumor/src -DBDMSYS="/home/ale/biodynamo-v1.05.125" -DUSE_MPI -DUSE_NUMA -DUSE_DICT

libmy_tumor_dict_rdict.pcm: libmy_tumor_dict.cc
	@$(CMAKE_COMMAND) -E touch_nocreate libmy_tumor_dict_rdict.pcm

libmy_tumor_bdm_dict.cc: ../src/brownian.h
libmy_tumor_bdm_dict.cc: ../src/my_tumor.h
libmy_tumor_bdm_dict.cc: /home/ale/biodynamo-v1.05.125/bin/bdm-dictionary
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/ale/biodynamo-v1.05.125/demo/my_tumor/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Generating libmy_tumor_bdm_dict.cc"
	/home/ale/biodynamo-v1.05.125/bin/bdm-dictionary --out-of-source --output /home/ale/biodynamo-v1.05.125/demo/my_tumor/build/libmy_tumor_bdm_dict.cc --include-dirs /usr/lib/x86_64-linux-gnu/openmpi/include /usr/lib/x86_64-linux-gnu/openmpi/include/openmpi /usr/include /home/ale/biodynamo-v1.05.125/third_party/root/include /home/ale/biodynamo-v1.05.125/demo/my_tumor/build/omp /home/ale/biodynamo-v1.05.125/include /home/ale/biodynamo-v1.05.125/include/optim /home/ale/biodynamo-v1.05.125/demo/my_tumor/src --headers /home/ale/biodynamo-v1.05.125/demo/my_tumor/src/brownian.h /home/ale/biodynamo-v1.05.125/demo/my_tumor/src/my_tumor.h

CMakeFiles/my_tumor.dir/src/my_tumor.cc.o: CMakeFiles/my_tumor.dir/flags.make
CMakeFiles/my_tumor.dir/src/my_tumor.cc.o: ../src/my_tumor.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ale/biodynamo-v1.05.125/demo/my_tumor/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/my_tumor.dir/src/my_tumor.cc.o"
	/usr/bin/mpicxx $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/my_tumor.dir/src/my_tumor.cc.o -c /home/ale/biodynamo-v1.05.125/demo/my_tumor/src/my_tumor.cc

CMakeFiles/my_tumor.dir/src/my_tumor.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/my_tumor.dir/src/my_tumor.cc.i"
	/usr/bin/mpicxx $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ale/biodynamo-v1.05.125/demo/my_tumor/src/my_tumor.cc > CMakeFiles/my_tumor.dir/src/my_tumor.cc.i

CMakeFiles/my_tumor.dir/src/my_tumor.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/my_tumor.dir/src/my_tumor.cc.s"
	/usr/bin/mpicxx $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ale/biodynamo-v1.05.125/demo/my_tumor/src/my_tumor.cc -o CMakeFiles/my_tumor.dir/src/my_tumor.cc.s

CMakeFiles/my_tumor.dir/libmy_tumor_dict.cc.o: CMakeFiles/my_tumor.dir/flags.make
CMakeFiles/my_tumor.dir/libmy_tumor_dict.cc.o: libmy_tumor_dict.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ale/biodynamo-v1.05.125/demo/my_tumor/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/my_tumor.dir/libmy_tumor_dict.cc.o"
	/usr/bin/mpicxx $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/my_tumor.dir/libmy_tumor_dict.cc.o -c /home/ale/biodynamo-v1.05.125/demo/my_tumor/build/libmy_tumor_dict.cc

CMakeFiles/my_tumor.dir/libmy_tumor_dict.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/my_tumor.dir/libmy_tumor_dict.cc.i"
	/usr/bin/mpicxx $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ale/biodynamo-v1.05.125/demo/my_tumor/build/libmy_tumor_dict.cc > CMakeFiles/my_tumor.dir/libmy_tumor_dict.cc.i

CMakeFiles/my_tumor.dir/libmy_tumor_dict.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/my_tumor.dir/libmy_tumor_dict.cc.s"
	/usr/bin/mpicxx $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ale/biodynamo-v1.05.125/demo/my_tumor/build/libmy_tumor_dict.cc -o CMakeFiles/my_tumor.dir/libmy_tumor_dict.cc.s

CMakeFiles/my_tumor.dir/libmy_tumor_bdm_dict.cc.o: CMakeFiles/my_tumor.dir/flags.make
CMakeFiles/my_tumor.dir/libmy_tumor_bdm_dict.cc.o: libmy_tumor_bdm_dict.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ale/biodynamo-v1.05.125/demo/my_tumor/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/my_tumor.dir/libmy_tumor_bdm_dict.cc.o"
	/usr/bin/mpicxx $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/my_tumor.dir/libmy_tumor_bdm_dict.cc.o -c /home/ale/biodynamo-v1.05.125/demo/my_tumor/build/libmy_tumor_bdm_dict.cc

CMakeFiles/my_tumor.dir/libmy_tumor_bdm_dict.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/my_tumor.dir/libmy_tumor_bdm_dict.cc.i"
	/usr/bin/mpicxx $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ale/biodynamo-v1.05.125/demo/my_tumor/build/libmy_tumor_bdm_dict.cc > CMakeFiles/my_tumor.dir/libmy_tumor_bdm_dict.cc.i

CMakeFiles/my_tumor.dir/libmy_tumor_bdm_dict.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/my_tumor.dir/libmy_tumor_bdm_dict.cc.s"
	/usr/bin/mpicxx $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ale/biodynamo-v1.05.125/demo/my_tumor/build/libmy_tumor_bdm_dict.cc -o CMakeFiles/my_tumor.dir/libmy_tumor_bdm_dict.cc.s

# Object files for target my_tumor
my_tumor_OBJECTS = \
"CMakeFiles/my_tumor.dir/src/my_tumor.cc.o" \
"CMakeFiles/my_tumor.dir/libmy_tumor_dict.cc.o" \
"CMakeFiles/my_tumor.dir/libmy_tumor_bdm_dict.cc.o"

# External object files for target my_tumor
my_tumor_EXTERNAL_OBJECTS =

libmy_tumor.so: CMakeFiles/my_tumor.dir/src/my_tumor.cc.o
libmy_tumor.so: CMakeFiles/my_tumor.dir/libmy_tumor_dict.cc.o
libmy_tumor.so: CMakeFiles/my_tumor.dir/libmy_tumor_bdm_dict.cc.o
libmy_tumor.so: CMakeFiles/my_tumor.dir/build.make
libmy_tumor.so: /usr/lib/x86_64-linux-gnu/libnuma.so
libmy_tumor.so: /usr/lib/x86_64-linux-gnu/libblas.so
libmy_tumor.so: /usr/lib/x86_64-linux-gnu/liblapack.so
libmy_tumor.so: /usr/lib/x86_64-linux-gnu/libblas.so
libmy_tumor.so: /home/ale/biodynamo-v1.05.125/third_party/root/lib/libCore.so
libmy_tumor.so: /home/ale/biodynamo-v1.05.125/third_party/root/lib/libRIO.so
libmy_tumor.so: /home/ale/biodynamo-v1.05.125/third_party/root/lib/libNet.so
libmy_tumor.so: /home/ale/biodynamo-v1.05.125/third_party/root/lib/libHist.so
libmy_tumor.so: /home/ale/biodynamo-v1.05.125/third_party/root/lib/libGraf.so
libmy_tumor.so: /home/ale/biodynamo-v1.05.125/third_party/root/lib/libGraf3d.so
libmy_tumor.so: /home/ale/biodynamo-v1.05.125/third_party/root/lib/libGpad.so
libmy_tumor.so: /home/ale/biodynamo-v1.05.125/third_party/root/lib/libTree.so
libmy_tumor.so: /home/ale/biodynamo-v1.05.125/third_party/root/lib/libRint.so
libmy_tumor.so: /home/ale/biodynamo-v1.05.125/third_party/root/lib/libPostscript.so
libmy_tumor.so: /home/ale/biodynamo-v1.05.125/third_party/root/lib/libMatrix.so
libmy_tumor.so: /home/ale/biodynamo-v1.05.125/third_party/root/lib/libPhysics.so
libmy_tumor.so: /home/ale/biodynamo-v1.05.125/third_party/root/lib/libMathCore.so
libmy_tumor.so: /home/ale/biodynamo-v1.05.125/third_party/root/lib/libThread.so
libmy_tumor.so: /home/ale/biodynamo-v1.05.125/third_party/root/lib/libMultiProc.so
libmy_tumor.so: /home/ale/biodynamo-v1.05.125/third_party/root/lib/libImt.so
libmy_tumor.so: /home/ale/biodynamo-v1.05.125/third_party/root/lib/libGeom.so
libmy_tumor.so: /home/ale/biodynamo-v1.05.125/third_party/root/lib/libGui.so
libmy_tumor.so: /home/ale/biodynamo-v1.05.125/third_party/root/lib/libGenVector.so
libmy_tumor.so: /usr/lib/gcc/x86_64-linux-gnu/11/libgomp.so
libmy_tumor.so: /usr/lib/x86_64-linux-gnu/libpthread.a
libmy_tumor.so: /usr/lib/x86_64-linux-gnu/liblapack.so
libmy_tumor.so: /home/ale/biodynamo-v1.05.125/third_party/root/lib/libCore.so
libmy_tumor.so: /home/ale/biodynamo-v1.05.125/third_party/root/lib/libRIO.so
libmy_tumor.so: /home/ale/biodynamo-v1.05.125/third_party/root/lib/libNet.so
libmy_tumor.so: /home/ale/biodynamo-v1.05.125/third_party/root/lib/libHist.so
libmy_tumor.so: /home/ale/biodynamo-v1.05.125/third_party/root/lib/libGraf.so
libmy_tumor.so: /home/ale/biodynamo-v1.05.125/third_party/root/lib/libGraf3d.so
libmy_tumor.so: /home/ale/biodynamo-v1.05.125/third_party/root/lib/libGpad.so
libmy_tumor.so: /home/ale/biodynamo-v1.05.125/third_party/root/lib/libTree.so
libmy_tumor.so: /home/ale/biodynamo-v1.05.125/third_party/root/lib/libRint.so
libmy_tumor.so: /home/ale/biodynamo-v1.05.125/third_party/root/lib/libPostscript.so
libmy_tumor.so: /home/ale/biodynamo-v1.05.125/third_party/root/lib/libMatrix.so
libmy_tumor.so: /home/ale/biodynamo-v1.05.125/third_party/root/lib/libPhysics.so
libmy_tumor.so: /home/ale/biodynamo-v1.05.125/third_party/root/lib/libMathCore.so
libmy_tumor.so: /home/ale/biodynamo-v1.05.125/third_party/root/lib/libThread.so
libmy_tumor.so: /home/ale/biodynamo-v1.05.125/third_party/root/lib/libMultiProc.so
libmy_tumor.so: /home/ale/biodynamo-v1.05.125/third_party/root/lib/libImt.so
libmy_tumor.so: /home/ale/biodynamo-v1.05.125/third_party/root/lib/libGeom.so
libmy_tumor.so: /home/ale/biodynamo-v1.05.125/third_party/root/lib/libGui.so
libmy_tumor.so: /home/ale/biodynamo-v1.05.125/third_party/root/lib/libGenVector.so
libmy_tumor.so: CMakeFiles/my_tumor.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ale/biodynamo-v1.05.125/demo/my_tumor/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX shared library libmy_tumor.so"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/my_tumor.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/my_tumor.dir/build: libmy_tumor.so

.PHONY : CMakeFiles/my_tumor.dir/build

CMakeFiles/my_tumor.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/my_tumor.dir/cmake_clean.cmake
.PHONY : CMakeFiles/my_tumor.dir/clean

CMakeFiles/my_tumor.dir/depend: libmy_tumor_bdm_dict.cc
CMakeFiles/my_tumor.dir/depend: libmy_tumor_dict.cc
CMakeFiles/my_tumor.dir/depend: libmy_tumor_dict_rdict.pcm
	cd /home/ale/biodynamo-v1.05.125/demo/my_tumor/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ale/biodynamo-v1.05.125/demo/my_tumor /home/ale/biodynamo-v1.05.125/demo/my_tumor /home/ale/biodynamo-v1.05.125/demo/my_tumor/build /home/ale/biodynamo-v1.05.125/demo/my_tumor/build /home/ale/biodynamo-v1.05.125/demo/my_tumor/build/CMakeFiles/my_tumor.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/my_tumor.dir/depend

