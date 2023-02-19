/* library stdlib and time included */

#include <stdlib.h>
#include <stdio.h>

/**
 * main -function
 *
 * Description: prints all single digit numbers of base 10
 *
 * Return: returns (0) on success
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}

	putchar('\n');

	return (0);
}
