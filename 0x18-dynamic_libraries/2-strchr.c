#include "main.h"

/**
 * _strchr - char function
 * @s: pointer to string to be checked
 * @c: character to check for
 *
 * Description: checks for the first occurence of character
 *
 * Return: pointer to the first occurence or NULL
 */

char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
		{
			return (s + index);
		}
	}
	return ('\0');
}
