#Some defitions here:
CXX := g++
CXXFLAGS := -std=c++17
QUIET := @
ECHO := echo
RM := rm
BUILD_DIR := .

INSTALL_DIR ?= installation_prefix

SOURCES := main.cpp utilites_floats.cpp utilites_ints.cpp
OBJECTS := $(SOURCES:.cpp=.o)

# $@ is the name of file being created by the rule.
# $^ is the list of dependencies.

math_app: $(OBJECTS)
	$(QUIET)$(ECHO) "building math_app!"
	$(QUIET)$(CXX) -o $@ $^

# https://www.gnu.org/software/make/manual/html_node/Automatic-Variables.html
%.o: %.cpp 
	$(QUIET)$(ECHO) "compiling $< ..."
	$(QUIET)$(CXX) $(CXXFLAGS) -o "$@" -c $<

install_dir:
	$(QUIET)if [ ! -d "$(INSTALL_DIR)" ]; then mkdir "$(INSTALL_DIR)" ; fi
	$(QUIET)if [ ! -d "$(INSTALL_DIR)" ]; then echo "$(INSTALL_DIR) is not created" ; exit 1 ; fi

install: install_dir
	install -m 755 math_app "$(INSTALL_DIR)/math_app"

default: math_app

.PHONY: clean distclean install_dir

distclean:
	$(QUIET)$(ECHO) "removing math_app....!"
	$(QUIET)$(RM) -f $(BUILD_DIR)/math_app

clean:
	$(QUIET)$(ECHO) "removing all object files!"
	$(QUIET)$(RM) -f $(BUILD_DIR)/*.o

