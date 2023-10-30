#include "main.h"

/**
 * read_textfile - that reads a text file and prints it to the POSIX stdout.
 *
 * @filename: it is parm
 * @letters:  it is parm
 * Return: size or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int STD;
char *buffer;
ssize_t size = 0;


buffer = malloc(sizeof(ssize_t) * letters);
STD = open(filename, O_RDONLY);
if (STD == -1)
{
close(STD);
return (0);
}
size = read(STD, buffer, letters);
if (size < 0)
{
close(STD);
return (0);
}
size = write(STDOUT_FILENO, buffer, size);
free(buffer);
return (size);
}
