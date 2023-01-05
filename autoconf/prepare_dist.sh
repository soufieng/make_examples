#!/bin/bash

# necessary dependencies:
# $ sudo apt-get install -y autoconf autoconf-archive automake

set +ex

aclocal
autoconf
automake -a -c
./configure
make
