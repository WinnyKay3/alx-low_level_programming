#include "main.h"

/**
 * print_sign - int function
 * @n: the parameter to be checked
 *
 * Definition: Prints the sign of a number
 *
 * Return: 1 if is greater than 0, 0 if zero, -1 if less than 0
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}

	return (0);
}
