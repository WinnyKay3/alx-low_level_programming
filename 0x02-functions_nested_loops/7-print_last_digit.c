#include"main.h"

/**
* print_last_digit - int function
* @n: the parameter to be checked
*
* Definition: Prints last digit if a number
*
* Return: last digit
*
*/
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (n < 0)
	{
		last_digit += -1;
	}

	_putchar(last_digit + '0');

	return (last_digit);
}
