#include "main.h"

/**
 * print_diagonal - Prints a diagonal line
 * @n: The number of times _ is printed
 *
 * Description: Prints a line in the terminal
 */

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else if (n <= 0)
	{
		_putchar('\n');
	}
}
