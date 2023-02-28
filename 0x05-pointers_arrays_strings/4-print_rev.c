#include "main.h"

/**
 * print_rev - void function
 * @s: string to be reversed
 *
 * Description: prints a reversed string followed by a new line
 */

void print_rev(char *s)
{
	int i, n;

	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			n = i;
		}
		while (n >= 0)
		{
			_putchar(s[n]);
			n--;
		}
		_putchar('\n');
	}
}
