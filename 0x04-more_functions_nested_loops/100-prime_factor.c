#include <stdio.h>
#include <math.h>

/**
 * main - Entry point
 *
 * Description: Prints the largest prime factor
 *
 * Return: 0 on success
 */

int main(void)
{
	long int i, num;

	num = 612852475143;

	while (num % 2 == 0)
	{
		printf("%d", 2);
		num = num / 2;
	}
	for (i = 3; i < sqrt(num); i = i + 2)
	{
		if (num % i == 0)
		{
			num = num / i;
		}
	}

	printf("%ld\n", num);

	return (0);
}
