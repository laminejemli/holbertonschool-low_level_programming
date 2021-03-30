#include "holberton.h"

/**
 * create_file - creates a file
 * @filename: name of the file
 * @text_content: is a NULL terminated string
 * Return: 1 on success, -1 if fails
 */
int create_file(const char *filename, char *text_content)
{
	int file, l = 0;

    
    file = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (!filename)
    
		return (-1);
	
	if (file < 0)
		return (-1);

	while (text_content && text_content[l])
		l++;
	if (write(file, text_content, l) < 0)
	{
		close(file);
		return (-1);
	}
	close(file);
	return (1);
}
