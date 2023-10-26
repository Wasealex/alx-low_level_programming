#ifndef MAIN_H
#define MAIN_H
/*header files*/
#include <stdio.h>
#include <unistd.h>
#include <string.h>
/*function declarations*/
unsigned int binary_to_uint(const char *b);
unsigned int power(unsigned int exponent);
void print_binary(unsigned long int n);
int _putchar(char c);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
#endif /*MAIN_H*/
