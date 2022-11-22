#include "main.h"
#define STDERR_FILENO 2
/**
 * main - copie the content of a file into another one
 * @argc: arg count
 * @argv: arg vector
 * Return: 1
 */

int main(int argc, char *argv[])
{
	char *buffer[1024];
	int fd1, fd2, test1 = 0, test2 = 0, size = 0;

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		return (97);
	}
	/*open both files*/
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		return (98);
	}
	fd2 = open(argv[2], O_RDWR | O_TRUNC | O_CREAT, 0664);
	/*read file 1 + write file2*/
	while ((size = read(fd1, buffer, 1024)))
	{
		write(fd2, buffer, size);
	}
	test1 = close(fd1);
	if (test1 == -1)
	{
		dprintf(2, "Error: Can't close fd %d", test1);
		return (100);
	test2 = close(fd2);
	}
	if (test2 == -1)
	{
		dprintf(2, "Error: Can't close fd %d", test2);
		return (100);
	}
	size = size;
	return (0);
}
