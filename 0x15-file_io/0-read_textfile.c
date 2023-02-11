#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - reads text and prints to the POSIX standard output
 * @filename: path to file
 * @letters: chars to read
 * Return: 0 if write fails or file cant open, otherwise num of letters read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buff;
	ssize_t bytes, r;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		close(fd);
		return (0);
	}

	buff = malloc(sizeof(char) * letters);
	if (!buff)
	{
		close(fd);
		return (0);
	}

	bytes = read(fd, buff, letters);

	if (bytes == -1)
	{
		close(fd);
		free(buff);
		return (0);
	}

	r = write(STDOUT_FILENO, buff, bytes);

	if (r == -1)
	{
		close(fd);
		free(buff);
		return (0);
	}
	close(fd);
	return (bytes);
}

