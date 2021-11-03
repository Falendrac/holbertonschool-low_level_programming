#include "function_pointers.h"

/**
 * print_name - Function that prints a name
 *
 * @name: The name we want to print
 * @f: Pointer to function that take a char pointer as parameters
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;

	f(name);
}
