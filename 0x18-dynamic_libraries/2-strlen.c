#include "main.h"

/**
 * _strlen - int funtion
 * @s: char type whose value is read
 *
 * Description: returns the length of s
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
