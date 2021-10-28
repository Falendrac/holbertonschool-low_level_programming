#include <stdlib.h>
#include "main.h"

/**
 * array_range - Function that creates an array of integers
 * It's contain all the values fro min (included) to max (included)
 * ordered from min to max
 *
 * @min: The min value
 * @max: The max value
 *
 * Return: mintomax
 */
int *array_range(int min, int max)
{
	int *mintomax, numberOfArg, loop;

	if (min > max)
		return (NULL);

	if (min == 0)
		numberOfArg = max + 1;
	else if (min == 1)
		numberOfArg = max;
	else
		numberOfArg = max - min + 1;

	mintomax = malloc(sizeof(int) * numberOfArg);

	if (mintomax == NULL)
		return (NULL);

	for (loop = 0; loop < numberOfArg; loop++)
		*(mintomax + loop) = min + loop;

	return (mintomax);
}
