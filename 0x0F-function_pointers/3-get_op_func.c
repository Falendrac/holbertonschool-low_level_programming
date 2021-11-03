#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
 * get_op_func - Select the correct function to perform the operation
 * asked by the user.
 *
 * @s: The operation sign
 *
 * Return: NULL
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
		};
	int i;

	i = 0;
	while (ops[i].op != NULL && strlen(s))
	{
		if (*ops[i].op == *s)
			return ((*ops[i].f));

		i++;
	}

	return (NULL);
}
