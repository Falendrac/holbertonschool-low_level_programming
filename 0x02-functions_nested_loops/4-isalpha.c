/**
 * _isalpha - Check for alphabetic character
 *
 * @c: Character we check
 *
 * Return: 0
 */
int _isalpha(int c)
{
	char lchar, uchar;

	for (lchar = 'a'; lchar <= 'z'; lchar++)
		if (lchar == c)
			return (1);

	for (uchar = 'A'; uchar <= 'Z'; uchar++)
		if (uchar == c)
			return (1);

	return (0);
}
