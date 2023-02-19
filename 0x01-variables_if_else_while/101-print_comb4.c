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
	int i, j, k;

	for (i = 0; i < 8; i++)
	{
		for (j = i + 1; j < 9; j++)
		{
			for (k = j + 1; k < 10; k++)
			{
				if (j != k)
				{
					putchar('0' + (i % 10));
					putchar('0' + (j % 10));
					putchar('0' + (k % 10));

					if (j == 8  && i == 7 && k == 9)
					continue;

					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
