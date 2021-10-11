/**
 * swap_int - Take two point of int and swap the value of the variables
 * @a: Pointer of a
 * @b: Pointer of b
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
