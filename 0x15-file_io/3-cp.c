#include "main.h"

int main(int argc, char **argv)
{
int fd[2], i, buff;
mode_t mode;

mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
i = 0;
buff = 1024;
if (argc != 3)
{
dprintf(2, "Usage: cp file_from file_to");
exit(97);
}
fd[0] = open(argv[0], O_RDONLY);
if (fd[0] == -1)
{
dprintf(2, "Error: Can't read from file NAME_OF_THE_FILE %s", argv[0]);
exit(98);
}
fd[1] = open(argv[1], O_WRONLY | O_CREAT | O_TRUNC, mode);
if (fd[1] == -1)
{
dprintf(2, "Error: Can't write to NAME_OF_THE_FILE %s", argv[1]);
i = close(fd[0]);
if (i != 0)
{
dprintf(2, "Error: Can't close fd FD_VALUE");
exit(100);
}
exit(99);
}
i = 0;
i = write(fd[0], (void *)fd[1], buff);
if (i != buff)
{
close(fd[0]);
close(fd[1]);
}
close(fd[0]);
close(fd[1]);
}

