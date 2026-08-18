#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <string.h>

/**
 * append_text_to_file - appends text to a file
 * @filename: name of file to create
 * @text_content: null terminated string to write
 *
 * Return: 1 on sucess, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w;

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	w = write(fd, text_content, strlen(text_content));
	if (w == -1)
		return (-1);
	close(fd);
	return (1);
}
