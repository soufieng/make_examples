# this is example-file: configure.ac

# initial information about the project
AC_INIT([awesomeApp],[0.1])

# check for C++ preprocessor and compiler
AC_PROG_CXXCPP
AC_PROG_CXX

AX_CXX_COMPILE_STDCXX_17([ext],[mandatory])

# automake initialization (mandatory) including a check for automake API version >= 1.9
AM_INIT_AUTOMAKE([1.9])

# use the C++ compiler for the following checks
AC_LANG([C++])


# Checks for header files.
AC_CHECK_HEADERS([iostream])

# distribute additional compiler and linker flags among Makefiles
# --> set and change these variables instead of CXXFLAGS or LDFLAGS (for user only)
AC_SUBST([AM_CXXFLAGS])
AC_SUBST([AM_LDFLAGS])

# files to generate via autotools (prepare .am or .in source files)
AC_CONFIG_FILES([Makefile src/Makefile])

# finally this generates the Makefiles etc. for the build
AC_OUTPUT