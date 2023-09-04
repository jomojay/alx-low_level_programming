#include "main.h"


/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file to read from
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t len_r = 0, len_w = 0;
	char *buff;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		close(fd);
		return (0);
	}
	len_r = read(fd, buff, letters);
	close(fd);
	if (len_r == -1)
	{
		free(buff);
		return (0);
	}
	len_w = write(STDOUT_FILENO, buff, len_r);
	free(buff);
	if (len_r != len_w)
		return (0);
	return (len_w);
}
