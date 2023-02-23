#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Return: 0
 */

int main(void)
{
	unsigned long int a = 0, a1 = 1, b = 0, b2 = 2;
	unsigned long int i, j, k, limit;
	int count;

	limit = 10000000000;

	printf("%lu, %lu, ", a1, b2);
	for (count = 2; count < 98; count++)
	{
		if (a1 + b2 > limit || b > 0 || a > 0)
		{
			i = (a1 + b2) / limit;
			j = (a1 + b2) % limit;
			k = a + b + i;
			a = b, b = k;
			a1 = b2, b2 = j;
			printf("%lu%010lu", b, b2);
		}
		else
		{
			j = a1 + b2;
			a1 = b2, b2 = j;
			printf("%lu", b2);
		}
		if (count != 97)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
