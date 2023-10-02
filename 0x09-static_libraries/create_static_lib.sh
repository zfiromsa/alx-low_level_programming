#!/usr/bin/env bash
gcc -c *.c
ar rcs liball.a *.o
rm -f *.o

