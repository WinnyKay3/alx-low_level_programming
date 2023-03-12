#include <stdio.h>

/**
 * main - Prints a program name followed by a new line
 * @argc: Number of arguments supplied to the program
 * @argv: An array of pointers to arguments
 *
 * Return: 0
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
