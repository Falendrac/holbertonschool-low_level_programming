#include <stdio.h>

/**
 * turtle - Function that executed before other functions
 *
 */
void __attribute__ ((constructor)) turtle(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
