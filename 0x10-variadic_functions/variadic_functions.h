#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
/*header files*/
#include <stdio.h>
#include <stdarg.h>
/*prototypes*/
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
#endif /*VARDIAC_FUNCTIONS_H*/
