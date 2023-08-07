#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int rv;
	ssize_t nd, nw;
	char *buff;

	if (!filename)
		return (0);

	rv = open(filename, O_RDONLY);

	if (rv == -1)
		return (0);

	buff = malloc(sizeof(char) * (letters));
	if (!buff)
		return (0);

	nd = read(rv, buff, letters);
	nw = write(STDOUT_FILENO, buff, nd);

	close(rv);

	free(buff);

	return (nw);
}
