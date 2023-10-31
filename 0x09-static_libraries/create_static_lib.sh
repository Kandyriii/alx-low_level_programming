#!/bin/bash
gcc -Wall -pedantic -Werror -Wexxtra -c *.c
ar -rc liball.a *.o
ranlib liball.a
