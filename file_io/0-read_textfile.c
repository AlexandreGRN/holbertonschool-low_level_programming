#include "main.h"
/**
 * read_textfile - read and print a text file
 * @filename: filename
 * @letters: size
 * Return: a
 */

ssize_t read_textfile(const char *filename, size_t letters)
{

	int fd, size, len;
	void *buffer;

	fd = open(filename, O_RDONLY); /*get file desc for read*/
	if (fd == -1)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters); /*buffer to store file*/
	if (buffer == NULL)
	{
		return (0);
	}
	size = read(fd, buffer, letters); /*size to print*/

	len = write(STDOUT_FILENO, buffer, size);

	close(fd);
	return (len);
}
