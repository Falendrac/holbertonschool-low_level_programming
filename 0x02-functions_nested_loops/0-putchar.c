#include "main.h"

/**
 * main - Program that print _putchar
 *
 * Return: 0
 */
int main(void)
{
	char *c = "_putchar";

	while (*c != '\0')
		_putchar(*c++);

	_putchar('\n');
	return (0);
}
