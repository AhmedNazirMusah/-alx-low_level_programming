#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read the text file.
 * @filename: text file reading.
 * @letters: number of letters 
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t f;
	ssize_t w;
	ssize_t t;

	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	t = read(f, buff, letters);
	w = write(STDOUT_FILENO, buff, t);

	free(buff);
	close(f);
	return (w);
}
