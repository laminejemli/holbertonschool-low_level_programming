#include "holberton.h"

/**
 * append_text_to_file - attach text at the end of a file
 * @filename: file to attach
 * @text_content: content to attach
 *
 * Return: 1 on success and -1 if fails
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, p, s = 0;

file = open(filename, O_WRONLY | O_APPEND);

	if (!filename)
		return (-1);

	if (file < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[s])
			s++;
		p = write(file, text_content, s);
		if (p != s)
			return (-1);
	}

	close(file);

	return (1);
}
