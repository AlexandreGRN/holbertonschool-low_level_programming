#include "main.h"

/**
 * create_file - function that create a file
 * @filename: the file name
 * @text_content: text to add
 * Return: 1 or -1 if error
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int len = 0;

	if (filename == NULL || text_content == NULL)
		return (-1);
	fd = open(filename, 0_RDWR | O_CREAT | O_TRUNC, 0600); /*create file*/
	if (fd == -1)
		return (-1);

	len = strlen(text_content);
	write(fd, text_content, len);

	close(fd);

	return (1);
}
