#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int _close(int fd);
ssize_t _read(const char *filename, int fd, char *buf, size_t count);
ssize_t _write(const char *filename, int fd, const char *buf, size_t count);

#endif
