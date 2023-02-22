#include "main.h"
/**
 * print_alphabet - void function
 *
 * Definition: Prints the alphabet in lowercase_putchar
 *
 */
void print_alphabet(void)
{
	char b;

	for (b = 97; b < 123; b++)
	{
		_putchar(b);
	}
	_putchar('\n');
}
