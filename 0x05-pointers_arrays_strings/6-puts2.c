#include "main.h"

/**
 * puts2- void function
 * @str: variable to be printed
 *
 * Description - print every other character of a string
 */

void puts2(char *str)
{
	int i;

	if (*str == '\0')
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			if (i % 2 == 0)
			{
				_putchar(str[i]);
			}
		}
		_putchar('\n');
	}
}
