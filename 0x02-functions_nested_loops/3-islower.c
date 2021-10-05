/**
 * _islower - Check if the character is in lowercase
 *
 * @c: The character we check
 *
 * Return: 0
 */
int _islower(int c)
{
	char car;

	for (car = 'a'; car <= 'z'; car++)
		if (car == c)
			return (1);

	return (0);
}

