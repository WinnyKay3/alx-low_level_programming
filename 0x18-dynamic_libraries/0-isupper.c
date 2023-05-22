#include "main.h"

/**
 * _isupper - int function
 * @c: the parameter to be checked
 *
 * Definition: Checks wether a letter is uppercase or not
 *
 * Return: 1 if is uppercase 0 if not
 *
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
		return (0);
}
