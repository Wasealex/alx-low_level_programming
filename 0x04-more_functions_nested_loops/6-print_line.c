#include "main.h"
/**
 *print_line - prints line of a given number
 *@n: numbers of number given
 *
 *Return: lines if no error
 */
void print_line(int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
