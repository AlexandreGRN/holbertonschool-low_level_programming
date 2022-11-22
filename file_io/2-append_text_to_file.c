#include "main.h"

/**
 * append_text_to_file - function that create a file and append the content
 * @filename: the file name
 * @text_content: text to add
 * Return: 1 or -1 if error
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int len = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_CREAT | O_APPEND, 0600); /*create file*/
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		len = strlen(text_content);
		write(fd, text_content, len);
	}

	close(fd);

	return (1);
}
