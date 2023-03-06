#include "main.h"

/**
 * _memcpy - char function
 * @dest: pointer value of destination to copy to
 * @src: pointer value to source to copy from
 * @n: number of bytes from a memory area
 *
 * Description: copies from memory area
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index = 0;

	while (index < n)
	{
		dest[index] = src[index];
		index++;
	}

	return (dest);
}
