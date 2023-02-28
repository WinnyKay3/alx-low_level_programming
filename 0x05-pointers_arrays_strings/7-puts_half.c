#include "main.h"

/**
 * puts_half - void function
 * @str: char type to print
 *
 * Description: print half the of a string
 *
 */

void puts_half(char *str)
{
	int i, j, n;

	if (*str == '\0')
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			j++;
		}
		if (j % 2 == 0)
		{
			for (j = (i / 2); j <= i - 1; j++)
			{
				_putchar(str[j]);
			}
			_putchar('\n');
		}
		else
		{
			n = (i - 1) / 2;
			for (j = n + 1; j <= i - 1; j++)
			{
				_putchar(str[j]);
			}
			_putchar('\n');
		}
	}
}
