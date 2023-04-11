#!/bin/bash
gcc -c -pedantic -Werror -Wextra -c *.c
ar -rc liball.a *.o
ranlib liball.a
