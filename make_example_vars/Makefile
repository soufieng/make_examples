#Some defitions here:
CC := g++
CXXFLAGS := -std=c++17
QUIET := @
ECHO := echo
RM := rm
# $@ is the name of file being created by the rule.
# $^ is the list of dependencies.

app: main.o
	$(QUIET)$(ECHO) "building app!"
	$(QUIET)$(CC) -o $@ $^

main.o: main.cpp
	$(QUIET)$(ECHO) "compiling $^ ..."
	$(QUIET)$(CC) $(CXXFLAGS) -o $@ -c $^

default: app

.PHONY: clean distclean

distclean: clean
	$(QUIET)$(ECHO) "removing app....!"
	$(QUIET)$(RM) -f app

clean:
	$(QUIET)$(ECHO) "removing all object files!"
	$(QUIET)$(RM) -f *.o