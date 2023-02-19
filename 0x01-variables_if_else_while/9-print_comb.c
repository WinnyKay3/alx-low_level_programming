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
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}

	}

	putchar('\n');

	return (0);
}
