#include "main.h"

/**
 * _strpbrk - unsigned int function
 * @s: segment that will be checked
 * @accept: the bytes to check
 *
 * Description: Searches a string for any of a set
 *
 * Return: pointer to the byte that matces one in accept or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
