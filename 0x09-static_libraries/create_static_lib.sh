#!/bin/bash
# compile all the file with .c extension(c file) to object files
gcc -c *.c

# archive all the object files into liball.a library
ar rc liball.a *.o
