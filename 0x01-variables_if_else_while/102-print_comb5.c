/* library stdlib and time included */

#include <stdlib.h>
#include <stdio.h>

/**
 * main -function
 *
 * Description: prints all possible cobinations of single-digit numbers
 *
 * Return: returns (0) on success
 */

int main(void)
{
	int i, j;

	for (i = 0; i < 100; i++)
	{
		for (j = 0; j < 100; j++)
		{
			if (j != i && i < j)
			{
				putchar('0' + (i / 10));
				putchar('0' + (i % 10));
				putchar(' ');
				putchar('0' + (j / 10));
				putchar('0' + (j % 10));

				if (i == 98  && j == 99)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
