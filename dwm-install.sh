#!/bin/bash
#--------------------------------------------
# Install script for my personal dwm patches
# Last updated 12 Apr 2015
#--------------------------------------------

set -e

cd ../
for pfile in $(ls patches/*.diff); do
    patch -p1 < $pfile
done

make clean
make -j4
