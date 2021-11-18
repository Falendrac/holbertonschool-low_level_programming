#include "main.h"
#include <stdio.h>

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;
	unsigned int loop = 0;
	unsigned long int n_divided = n;


	while (loop < index && n_divided != 0)
	{
		n_divided /= 2;
		loop++;
	}

	if (n_divided == 0)
		bit = -1;
	else
		bit = n_divided % 2;

	return (bit);
}
