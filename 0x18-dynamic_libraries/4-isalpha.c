#include "main.h"

/**
 * _isalpha - int function
 * @c: the parameter to be checked
 *
 * Definition: Checks if it is a letter wether lowcase or uppercase
 *
 * Return: 1 if lowercase 0 if not
 *
 */
int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
	{
		return (1);
	}
		return (0);
}
