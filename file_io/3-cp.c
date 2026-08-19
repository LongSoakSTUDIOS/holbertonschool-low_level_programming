#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <string.h>
#include <stdarg.h>

/**
 * main - file 1 to file 2
 * @argc: count of arguments
 * @argv: arguement inputs
 *
 * Return: 1 on sucess, -1 on failure
 */
int main(int argc, char *argv[])
{
	int fd1, fd2, w;
	ssize_t r;
	char *file1, *file2;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file1 = argv[1];
	file2 = argv[2];
	buffer = malloc(1024);
	if (buffer == NULL)
		return 0;

	fd1 = open(file1, O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(1, "Can't read from file %s\n", file1);
		exit(98);
	}
	fd2 = open(file2, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file2);
		exit(99);
	}
	while ((r = read(fd1, buffer, 1024)) > 0)
	{
		w = write(fd2, buffer, r);
		if (w == -1 || w != r)
		{
			dprintf(2, "Error: Can't write to %s\n", file2);
			exit(99);
		}
	}
	if (close(fd1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd");
		exit(100);
	}
	if (close(fd2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd");
		exit(100);
	}
	
	return 0;
}
