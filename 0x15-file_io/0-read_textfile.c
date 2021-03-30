#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it
 * @filename: name of the file
 * @letters: number of letters
 * Return: the number of letters, or 0 if it failed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
    int file;
    int p, l;
    char *s;

    if (!filename)

    return (0);

 s = malloc(sizeof(char) * letters);
    if (!s)
    {
        return (0);
    }
    
    file = open(filename, O_RDONLY);
    if (file < 0)
    return (0);

   
        p = read(file, s, letters);

        if (p < 0)
        {
            free(s);
            return (0);
        }

        s[p] = '\0';

        close(file);

        l = write(STDOUT_FILENO, s, p);
        if (l < 0)
        {
            free(s);
            return (0);
        }
        free(s);
        return (l);
}