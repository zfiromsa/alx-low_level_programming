#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89
gcc -c *.c && ar rcs liball.a *.o
