#ifndef MAIN_H
#define MAIN_H

#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

ssize_t read_textfile(const char *filename, size_t letters);
#endif