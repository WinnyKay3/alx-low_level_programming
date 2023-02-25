#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints a square
 *
 * Return: 0 on success
 */

int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if ((i % 5 == 0) && (i % 3 == 0))
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");

		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i <= 99)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
