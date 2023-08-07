#include "main.h"
#include <stdlib.h>
/**
 * read_textfile- Read the  text file print to STDOUT.
 * @filename: Text file being read
 * @letters: Number of letters to be read
 * Return: w- actual number of bytes read and printed
 * 0 when function fails or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t d;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	d = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, d);

	free(buf);
	close(fd);
	return (w);
}
