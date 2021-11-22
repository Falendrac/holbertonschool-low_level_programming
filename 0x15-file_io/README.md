# 0x15 File I/O

## General

In this project, we see how to use functions for I/O manipulation.

* Look for the right source of information online
* How to create, open, close, read and write files
* What are file descriptors
* What are the 3 standard file descriptors, what are their purpose and what are their POSIX names
* How to use the I/O system calls open, close, read and write
* What are and how to use the flags O_RDONLY, O_WRONLY, O_RDWR
* What are file permissions, and how to set them when creating a file with the open system call
* What is a system call
* What is the difference between a function and a system call

## Requirement

For compiling:

> gcc -Wall -pedantic -Werror -Wextra -std=gnu89 [NAMESOFFILES.c] -o [NEWFILE]

Ubuntu 20.04.

### Source code tasks

0. 0-read_textfile.c

    Function that reads a text file and prints it to the POSIX standard output.

1. 1-create_file.c

    Function that creates a file.

2. 2-append_text_to_file.c

    Function that appends text at the end of a file

3. 3-cp.c

    Program that copies the content of a file to another file.
