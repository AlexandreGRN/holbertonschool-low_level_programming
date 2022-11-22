#include "main.h"
/**
 * main - copie the content of a file into another one
 * @argc: arg count
 * @argv: arg vector
 * Return: 1
 */
int main(int argc, char *argv[])
{
	char *buffer[1024];
	int fd1, fd2, test1 = 0, test2 = 0, test3 = 0, size = 0;

	if (argc != 3)
	{dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97); }
	/*open both files*/
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
	{dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		return (98); }
	fd2 = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (fd2 == -1)
	{dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		return (99); }
	/*read file 1 + write file2*/
	while ((size = read(fd1, buffer, 1024)))
	{
		if (size == -1)
		{dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			return (98); }
		test3 = write(fd2, buffer, size);
		if (test3 == -1)
		{dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			return (99); }
	}
	test1 = close(fd1); /*close*/
	if (test1 == -1)
	{dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", test1);
		return (100); }
		test2 = close(fd2);
	if (test2 == -1)
	{dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", test2);
		return (100); }
	size = size;
	return (0);
}
