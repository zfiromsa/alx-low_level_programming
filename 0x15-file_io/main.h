#ifndef MAIN_H
#define MAIN_H

#define _POSIX_C_SOURCE  200809L
#define _GNU_SOURCE
#define BUFFER 1024
#define USAGE "Usage: cp file_from file_to"
#define CANT_READ "Error: Can't read from file %s"
#define CANT_WRITE "Error: Can't write to %s"
#define CANT_CLOSE "Error: Can't close fd FD_VALUE"

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stddef.h>
#include <string.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif

