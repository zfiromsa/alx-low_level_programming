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
	ssize_t leng, ret;

	leng = 0;
	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
		leng = strlen(text_content);
	ret = write(fd, text_content, leng);
	if (ret != leng)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}

