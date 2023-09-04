#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void check_97(int argc);
void check_98(ssize_t check, char *file, int fd_from, int fd_to);
void check_99(ssize_t check, char *file, int fd_from, int fd_to);
void check_100(int check, int fd);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif /* MAIN_H */
