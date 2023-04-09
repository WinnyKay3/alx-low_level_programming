#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - reads a textfile and prints it to POSIX stdout
 * @filename: pointer to the name of the file
 * @letters: number of letters the function should read
 * and print
 *
 * Return: if function fail or filename is NULL -0
 * else - actual number of bytes the function can read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, r, w;
	char *buff;

	if (filename == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	r = read(fd, buff, letters);
	w = write(STDOUT_FILENO, buff, r);

	if (fd == -1 || r == -1 || w == -1 || w != r)
	{
		free(buff);
		return (0);
	}

	free(buff);
	close(fd);

	return (w);
}
