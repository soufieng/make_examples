ROOT_FOLDER = $(CURDIR)
OUT_FOLDER = $(ROOT_FOLDER)/build

.PHONY: default
default: application ;

include lib/Makefile
include app/Makefile

clean: clean_lib
clean: clean_app