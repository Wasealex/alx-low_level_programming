#include "main.h"
/**
 *print_binary - convert dec to binary
 *@n: number to be converted
 *Return: 0 if successful
 *
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n>>1);
	_putchar((n & 1) + '0');
}
