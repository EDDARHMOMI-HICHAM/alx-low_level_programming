#!/bin/bash

SRC_FILES=$(find . -maxdepth 1 -type f -name '*.c')

for SRC_FILE in $SRC_FILES; do
    gcc -Wall -pedantic -Werror -Wextra -c "$SRC_FILE"
done

ar rcs liball.a *.o

rm -f *.o
