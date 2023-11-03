#include "main.h"

int main(int argc, char **argv)
{
	char buffer[BUFFER];
	int fd_to, fd_from;
	ssize_t _read, _write;
	mode_t mode;

	mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	if (argc != 3)
	{
		dprintf(STDOUT_FILENO, USAGE);
		exit(97);
	}
	fd_from = open(argv[0], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDOUT_FILENO, CANT_READ, argv[0]);
		exit(98);
	}
	fd_to = open(argv[1], O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (fd_to == -1)
	{
		dprintf(STDOUT_FILENO, CANT_WRITE, argv[1]);
		if (close(fd_from) != 0)
		{
			dprintf(STDOUT_FILENO, CANT_CLOSE);
			exit(100);
		}
		exit(98);
	}
	_read = read(fd_from, buffer, BUFFER);
	if (_read < 0)
	{
		dprintf(STDOUT_FILENO, CANT_READ, argv[0]);
		exit(98);
	}
	_write = write(fd_to, buffer, BUFFER);
	if (_write < 0)
	{
		dprintf(STDOUT_FILENO, CANT_WRITE, argv[0]);
		exit(98);
	}
	if (close(fd_to) != 0)
	{
		dprintf(STDOUT_FILENO, CANT_CLOSE);
		exit(100);
	}
	if (close(fd_from) != 0)
	{
		dprintf(STDOUT_FILENO, CANT_CLOSE);
		exit(100);
	}
	return (0);
}

