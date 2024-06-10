#!/bin/bash
#creates an object file from all .c files
#Creates the static library from all of the object files
#ranlib liball.a: indexes the static library
gcc -c *.c
ar rc liball.a *.o
ranlib liball.a
rm *.o
