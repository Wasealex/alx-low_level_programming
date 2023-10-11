#ifndef _function_pointers_h_
#define _function_pointers_h_
/*header file*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
/*prtotype*/
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
#endif /*function_pointers.h*/
