# 0x18 - Dynamic Libraries

## General

In this project, we see what is a dynamic library, how does it work, how to create one, and how to use it.
Also we see the difference between dynamic and static libraries.

## Ressources

* [What is difference between Dynamic and Static library (Static and Dynamic linking)](https://www.youtube.com/watch?v=eW5he5uFBNM)
* [Technical Writing](https://students-support.hbtn.io/hc/en-us/articles/360023750254)

### Source code

* libdynamic.so, main.h

* 1-create_dynamic_lib.sh

    Script that creates a dynamic library called liball.so from all the .c
    files that are in the current directory.

* 100-operations.so

    Dynamic library that contains C functions that can be called from Python.

* 101-make_me_win.sh