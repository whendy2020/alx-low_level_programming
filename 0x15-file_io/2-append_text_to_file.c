#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"

/**
 * append_text_to_file - function appends text to the end of a file
 * @filename: path to file
 * @text_content: content
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fnd;
	ssize_t w;
	int size;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fnd == -1)
		return (-1);

	if (!text_content)
	{
		close(fnd);
		return (1);
	}

	size = _strlen(text_content);
	w = write(fnd, text_content, size);

	if (w == -1)
	{
		close(fnd);
		return (-1);
	}
	close(fnd);
	return (1);
}

/**
 * _strlen - len
 *
 * @s: is a pointer to a char
 *
 * Return: Always 0.
 */

int _strlen(const char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}

	return (i);
}
