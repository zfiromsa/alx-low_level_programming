#!/bin/bash
gcc -c *.c
ar rcs liball.a *.o
rm -f *.o
echo "Static library liball.a has been created."
