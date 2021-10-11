/**
 * _atoi - Convert a string to an integer
 *
 * @s: Pointer of a string
 *
 * Return: number
 */
int _atoi(char *s)
{
	int sign = 1, size = 1, innumber = 0, number = 0, browse = 0;

	while (s[browse] != '\0')
	{
		if (s[browse] == '-')
			sign *= -1;

		if (innumber == 1 && (s[browse] < '0' || s[browse] > '9'))
			break;

		if (s[browse] >= '0' && s[browse] <= '9')
		{
			if (sign < 0)
				number = number * size - (s[browse] - 48);
			else
				number = number * size + (s[browse] - 48);

			browse++;
			innumber = 1;

			if (size < 10)
				size *= 10;
		}
		else
			browse++;
	}


	return (number);
}

