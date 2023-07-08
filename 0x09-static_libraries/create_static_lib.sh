#!/bin/bash
gcc -Wall -pedantic -Wextra -Werror -std=gnu89 -c *.c
ar rcs liball.a *.o
ranlib liball.a
