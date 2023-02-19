/**
 * main - entry point
 *
 * Description: Prints without printf and puts
 *
 * Return: Always 1 (error)
 */

#include <unistd.h>

int main(void)
{
	char *mess = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, mess, 59);
	return (1);
}
