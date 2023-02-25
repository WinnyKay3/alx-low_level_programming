#include "main.h"

/**
 * print_numbers - void function
 *
 * Description: Prints numbers 0 to 9
 *
 */

void print_numbers(void)
{
	char c;

	for (c = 0; c < 10; c++)
	{
		_putchar('0' + c);
	}
	_putchar('\n');
}
