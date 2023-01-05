#!/bin/bash

set +ex
# this script will delete generated files

rm -rf autom4te.cache \
        COPYING \
        INSTALL \
        Makefile.in \
        Makefile \
        aclocal.m4 \
        configure \
        config.* \
        depcomp \
        install-sh \
        missing \
        awesomeapp* \
        src/Makefile.in \
        src/Makefile \
        src/.deps
