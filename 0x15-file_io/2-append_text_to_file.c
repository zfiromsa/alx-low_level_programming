#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 *
 * @filename: it is parm
 * @text_content:  it is parm
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t leng;

	fd = open(filename, O_EXCL | O_APPEND);
	if (fd == -1)
		return (-1);
	leng = strlen(text_content);
	write(fd, text_content, leng);
	close(fd);
	return (1);
}

