#!/bin/bash
# This file has been modified for task 2
# We are not compiling for windows in this!

# This script uses the make command to compile the binary and then executes it
# make clean # to clean previously built binaries
make clean
make
# copy files to the configured folders
cp libtrans.so ../thirdparty/linux/lib/x64
cp libtrans.so ../thirdparty/Mac/lib/x64
cp trans.h ../thirdparty/linux/include
cp trans.h ../thirdparty/Mac/include
# execute example program by ./main
echo "Please use ./main to run the example program."
# echo $(ls ../thirdparty)