#include "main.h"

/**
* read_textfile - Reads and print content of a file to stdout.
* @filename: Name of the file.
* @letters: Numbers of letters to read and print.
* Return: The number of letters read and printed,
*         or 0 on failure.
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t n;
	int fd;
	char *buff;

	if (!filename || !letters)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (!buff)
		return (0);

	n = read(fd, buff, letters);
	if (n == -1 || write(STDOUT_FILENO, buff, n) != n)
	{
		free(buff);
		return (0);
	}

	close(fd);
	free(buff);
	return (n);
}
