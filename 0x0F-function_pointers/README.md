# 0x0F-function_pointers

## General

In this project, we see what are function pointers and how to use them.
What does a function pointer exactly hold.
Where does a function pointer point to in the virtual memory.

## Requirements

For compiling:

> gcc -Wall -pedantic -Werror -Wextra -std=gnu89 [NAMEOFFILE.c] -o [NAMEFILE]

Ubuntu 20.04.

### Code source tasks

0. 0-print_name.c

    Function that print a name.

    Compiling:

    > gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_name.c -o a

1. 1-array_iterator.c

    Function that executes a function given as a parameter on each element of an array

    Compiling:

    > gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-array_iterator.c -o b

2. 2-int_index.c

    Function that searches for an integer.

    Compiling:

    > gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-int_index.c -o c

3. 3-main.c, 3-op_functions.c, 3-get_op_func.c, 3-calc.h

    Program that performs simple operation like :

        * Addition
        * Subtraction
        * multiplication
        * division
        * modulo
    
    3. 1. 3-calc.h

        Header file containing all the function prototypes and data structures used by the program.

    3. 2. 3-op_functions.c

        This file contain the 5 following functions:

        *   op_add: returns the sum of a and b.
        *   op_sub: returns the difference of a and b.
        *   op_mul: returns the product of a and b.
        *   op_div: returns the result of the division of a by b.
        *   op_mod: returns the remainder of the division of a by b.
    
    3. 3. 3-get_op_func.c

        This file contain the function that selects the correct function to perform the operation
        asked by the user.

    3. 4. 3-main.c

        File countaining the main function.
    
    Compiling:

    > gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-op_functions.c 3-get_op_func.c -o calc