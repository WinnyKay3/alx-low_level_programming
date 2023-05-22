#include "main.h"

/**
 * _strspn - unsigned int function
 * @s: segment that will be checked
 * @accept: the bytes to check
 *
 * Description: gets the length of a prefix substring
 *
 * Return: pointer to the first occurence or NULL
 */

unsigned int _strspn(char *s, char *accept)
{
	int index;
	unsigned int bytes = 0;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				bytes++;
				break;
			}
			else if (accept[index + 1] == '\0')
			{
				return (bytes);
			}
		}
		s++;
	}
	return (bytes);
}
