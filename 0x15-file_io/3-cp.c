#include "main.h"

int main(int argc, char **argv)
{
int fd_from, fd_to;
ssize_t leng_from;

if (argc != 3)
{
    exit(97);
}
leng_from = strlen(argv[2]);
fd_from = open(argv[2], O_RDONLY);
if (fd_from == -1)
{
    exit(98);
}
fd_to = open(argv[2], O_RDONLY);
if (fd_to == -1)
    exit(99);
write(fd_from, fd_from, leng_from);
close(fd_from);
}