/* library stdlib and time included */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -function
 *
 * Description: prints the alphabet lower case
 *
 * Return: returns (0) on success
 */

int main(void)
{
	int i;
	char c;

	for (i = 97; i < 123; i++)
	{
		c = i;
		putchar(c);
	}

	putchar('\n');

	return (0);
}
