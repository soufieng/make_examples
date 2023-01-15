#define a variable to store a path to current Makefile
APP_ROOT_DIR := $(ROOT_FOLDER)/app

# define a variable to use folder prefix
PRJ_SRC_DIR := $(APP_ROOT_DIR)/src

#define our target to build source file:
# we use a flag -I$(<path>) to include path to a list where can we search for header files.
# if we write: -I$(LIBRARY_INCLUDE_DIR), make will expand variable( to resolve a string) and will append this path to search path list.
app_source.o: $(PRJ_SRC_DIR)/app_source.cpp
	g++ -std=c++17 -c -I$(LIBRARY_INCLUDE_DIR) -o $(PRJ_SRC_DIR)/app_source.o $(PRJ_SRC_DIR)/app_source.cpp


application: app_source.o library
	g++ $(PRJ_SRC_DIR)/app_source.o -o $(APP_ROOT_DIR)/application $(CUSTOM_LIBRARY_PATH)/$(CUSTOM_LIBRARY_NAME)

#clean target
clean_app:
	rm -f $(PRJ_SRC_DIR)/app_source.o $(APP_ROOT_DIR)/application

