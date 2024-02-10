#!/bin/bash

echo "Compiling $(find . -name '*.c') to object files."
gcc -c $(find . -name '*.c')

echo "Compiling $(find . -name '*.o') into liball.a."
ar rc liball.a $(find . -name '*.o')
