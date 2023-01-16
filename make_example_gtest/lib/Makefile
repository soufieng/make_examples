#define a variable to store a path to current Makefile
LIB_ROOT_DIR := $(ROOT_FOLDER)/lib
# define a variable to use folder prefix
LIB_SRC_DIR := $(LIB_ROOT_DIR)/src

CUSTOM_LIBRARY_PATH = $(LIB_ROOT_DIR)
CUSTOM_LIBRARY_NAME = libcustomLib.a

# print the variable on the terminal to debug it:
$(info "Folder containing Makefile : $(LIB_ROOT_DIR)")

# Define Include path variable, which we will use for library AND application:
LIBRARY_INCLUDE_DIR = $(LIB_ROOT_DIR)/include

#define our target to build source file:
# we use a flag -I$(<path>) to include path to a list where can we search for header files.
# if we write: -I$(LIBRARY_INCLUDE_DIR), make will expand variable( to resolve a string) and will append this path to search path list.
$(LIB_SRC_DIR)/classFromLibrary.o: $(LIB_SRC_DIR)/classFromLibrary.cpp
	g++ -std=c++17 -I$(LIBRARY_INCLUDE_DIR) -c -o $(LIB_SRC_DIR)/classFromLibrary.o $(LIB_SRC_DIR)/classFromLibrary.cpp


# ar -> archive tool , which is creating an archive from files 
#   args:  q -> quick append file(s) to the archive
#          c -> do not warn if the library had to be created
#          s -> create an archive index (cf. ranlib), it The index lists each symbol
#               defined by a member of an archive that is a relocatable object file
#               An archive with such an index speeds up linking to the library and allows routines in the library to call each other
#               without regard to their placement in the archive
#
# with depending on object files, we build static library:
library: $(LIB_SRC_DIR)/classFromLibrary.o
	ar qcs $(CUSTOM_LIBRARY_PATH)/$(CUSTOM_LIBRARY_NAME) $(LIB_SRC_DIR)/classFromLibrary.o

#clean target
clean_lib:
	rm -f $(LIB_SRC_DIR)/classFromLibrary.o $(CUSTOM_LIBRARY_PATH)/$(CUSTOM_LIBRARY_NAME)

include $(LIB_ROOT_DIR)/ut/Makefile