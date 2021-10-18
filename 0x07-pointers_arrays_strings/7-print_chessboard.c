#include "main.h"

/**
 * print_chessboard - Prints the chessboard
 *
 * @a: The boeard of the chess
 */
void print_chessboard(char (*a)[8])
{
	int loop1, loop2;

	for (loop1 = 0; loop1 < 8; loop1++)
	{
		for (loop2 = 0; loop2 < 8; loop2++)
			_putchar(a[loop1][loop2]);

		_putchar('\n');
	}
}

