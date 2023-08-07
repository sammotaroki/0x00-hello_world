#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename.
 * @text_content: added content.
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int rv;
	int nletter;
	int rw;

	if (!filename)
		return (-1);

	rv = open(filename, O_WRONLY | O_APPEND);

	if (rv == -1)
		return (-1);

	if (text_content)
	{
		for (nletter = 0; text_content[nletter]; nletter++)
			;

		rw = write(rv, text_content, nletter);

		if (rw == -1)
			return (-1);
	}

	close(rv);

	return (1);
}
