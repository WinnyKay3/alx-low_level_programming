#include <stdio.h>

/**
 * main - entry point
 * Description: prints sum of even fibonacci numbers
 *
 * Return: 0
 */
int main(void)
{
	float total;
	unsigned long a = 0, b = 1, sum;

	while (1)
	{
		sum = a + b;

		if (sum > 4000000)
		{
			break;
		}

		if ((sum % 2) == 0)
		{
			total += sum;
		}

		a = b;
		b = sum;
	}
	printf("%.0f\n", total);

	return (0);
}
