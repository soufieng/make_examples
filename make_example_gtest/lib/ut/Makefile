#define a variable to store a path to current Makefile
UT_LIB_ROOT_DIR := $(LIB_ROOT_DIR)/ut


$(UT_LIB_ROOT_DIR)/tests.o: $(UT_LIB_ROOT_DIR)/tests.cpp 
	g++ -std=c++17 -I$(LIBRARY_INCLUDE_DIR) $(GTEST_INCLUDE_VAR) -c -o $(UT_LIB_ROOT_DIR)/tests.o $(UT_LIB_ROOT_DIR)/tests.cpp
 
library_ut: $(UT_LIB_ROOT_DIR)/tests.o gtest library
	g++ $(UT_LIB_ROOT_DIR)/tests.o -o $(UT_LIB_ROOT_DIR)/library_ut $(GTEST_LINK_VAR) $(CUSTOM_LIBRARY_PATH)/$(CUSTOM_LIBRARY_NAME)

	


