#include "main.h"

/**
 * print_chessboard - void function
 * @a: chessboard to print
 *
 * Description: print a chessboard
 *
 */

void print_chessboard(char (*a)[8])
{
	int index, count;

	for (index = 0; a[index][7]; index++)
	{
		for (count = 0; count < 8; count++)
		{
			_putchar(a[index][count]);
		}
		_putchar('\n');
	}
}
