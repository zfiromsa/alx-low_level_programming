#include "main.h"

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t leng;

	leng = strlen(text_content);
	fd = open(filename, O_EXCL | O_APPEND);
	if (fd == -1)
		return (-1);
	write(fd, text_content, leng);
	close(fd);
	return (-1);
}

