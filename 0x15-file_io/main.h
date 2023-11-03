#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int _putchar(char c);
char *create_buffer(char *file);
void close_file(int fd);
int main(int argc, char *argv[]);

#endif /* MAIN_H */
