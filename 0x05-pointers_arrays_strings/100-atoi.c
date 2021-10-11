/**
 * _atoi - Convert a string to an integer
 *
 * @s: Pointer of a string
 *
 * Return: number
 */
int _atoi(char *s)
{
	int sign = 1, size = 1, number = 0, browse = 0;

	while (s[browse] != '\0')
	{
		if (s[browse] == '-')
			sign *= -1;

		if (number > 0 && size < 10)
			size *= 10;

		if (s[browse] >= '0' && s[browse] <= '9')
		{
			number = number * size + s[browse] - 48;
			browse++;
		}
		else
			browse++;
	}

	number *= sign;

	return (number);
}

