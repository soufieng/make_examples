ROOT_FOLDER = $(CURDIR)
OUT_FOLDER = $(ROOT_FOLDER)/build

.PHONY: default
default: application ;

include lib/Makefile
include app/Makefile

clean: clean_lib
clean: clean_app



GTEST_ROOT_DIR    := $(OUT_FOLDER)/googletest
GTEST_INCLUDE_DIR := $(GTEST_ROOT_DIR)/googletest/include
GMOCK_INCLUDE_DIR := $(GTEST_ROOT_DIR)/googlemock/include
GTEST_BUILD_DIR   := $(GTEST_ROOT_DIR)/build
GTEST_LIBRARY_DIR := $(GTEST_BUILD_DIR)/lib
GTEST_LIBRARY_GTEST       := gtest
GTEST_LIBRARY_GTEST_MAIN  := gtest_main
GTEST_LIBRARY_GMOCK       := gmock
GTEST_LIBRARY_GMOCK_MAIN  := gmock_main

GTEST_INCLUDE_VAR := -I$(GTEST_INCLUDE_DIR) -I$(GMOCK_INCLUDE_DIR)
GTEST_LINK_VAR := -L$(GTEST_LIBRARY_DIR)  -l$(GTEST_LIBRARY_GTEST_MAIN) -l$(GTEST_LIBRARY_GTEST) -l$(GTEST_LIBRARY_GMOCK) -lpthread

gtest_download:
	mkdir -p $(OUT_FOLDER)
ifeq (,$(wildcard $(GTEST_ROOT_DIR)/CMakeLists.txt))
	git clone --depth 1 --branch release-1.12.0 https://github.com/google/googletest.git $(GTEST_ROOT_DIR)
else
	@echo "is it downloaded?"
endif


# googletest, quite complext target
gtest: gtest_download
ifeq (,$(wildcard $(GTEST_LIBRARY_DIR)/lib*.a))
	mkdir $(GTEST_BUILD_DIR)
	cd $(GTEST_BUILD_DIR) && cmake -Dgtest_force_shared_crt=ON ..
	cd $(GTEST_BUILD_DIR) && cmake --build .
else
	@echo "is it already built?"
endif



clean_gtest_build:
	rm -rf $(GTEST_BUILD_DIR)

clean_gtest:
	rm -rf $(GTEST_ROOT_DIR)