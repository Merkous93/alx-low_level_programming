#!/bin/bash

# create_static_lib.sh

# Create an object file for each .c file in the current directory
for cfile in *.c; do
    gcc -c -Wall -Werror -Wextra -pedantic "$cfile"
done

# Create the static library from all the .o files
ar -rc liball.a *.o

# Clean up the .o files
rm -f *.o

# Print the contents of the static library
echo "Static library 'liball.a' created with the following contents:"
ar -t liball.a

