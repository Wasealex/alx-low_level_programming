#ifndef MAIN_H
#define MAIN_H
/*header files*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
#include <fcntl.h>
#include <sys/types.h>
/*prototype function*/
ssize_t read_textfile(const char *filename, size_t letters);
#endif /*MAIN_H*/
