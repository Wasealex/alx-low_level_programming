#ifndef MAIN_H_
#define MAIN_H_
/*header files*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
/*prototype*/
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);

#endif
