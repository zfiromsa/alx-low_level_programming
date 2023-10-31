#include "main.h"
/**
 * create_file - Create a function that creates a file.
 *
 * @filename: it is parm
 * @text_content:  it is parm
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t leng;
	mode_t mode;

	mode = S_IRUSR | S_IWUSR;
	leng = strlen(text_content);
	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (fd == -1)
		return (-1);
	if (text_content ==NULL)
	{
		close(fd);
		return (1);
	}
	if (text_content != NULL)
		write(fd, text_content, leng);
	close(fd);
	return (1);
}

