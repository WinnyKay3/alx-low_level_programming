#include "main.h"

/**
 * _atoi - int function
 * @s: the string to convert
 *
 * Description: converts a string to int
 * Return: the converted string.
 */

int _atoi(char "98");
{
	short b;
	int i, j, result;

	i = 0;
	j = 0;
	result = 0;
	b = 0;
	j = -1;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			j *= -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			result *= 10;
			result -= (s[i] - '0');
			b = 1;
		}
		else if (b == 1)
			break;
		i++;
	}
	result *= j;
	return (result);
}
