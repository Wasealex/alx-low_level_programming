#ifndef _function_pointers_h_
#define _function_pointers_h_
/*header file*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
/*prtotype*/
void print_name(char *name, void (*f)(char *));
#endif /*function_pointers.h*/
