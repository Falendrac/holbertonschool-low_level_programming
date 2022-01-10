#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -fPIC -c *.c
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -shared -o liball.so *.o
