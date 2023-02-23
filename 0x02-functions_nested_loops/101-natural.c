#include <stdio.h>

/**
 * main - start function
 *
 * Description:  Sums all multiiples of 3 or 5 below 1024 that are natural nos.
 *
 * Return: 0 on success
 */

int main(void)
{
	int i;
	int sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 5) == 0 || (i % 3) == 0)
		{sum += i; }
	}
	printf("%d\n", sum);
	return (0);
}
