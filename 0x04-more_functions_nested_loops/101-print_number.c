#include "main.h"
/**
 *print_number - prints numbers
 *@n: number to be printed
 *Return: numbers
 */
void print_number(int n)
{
	if (n < 0)
		n = -1 * n;
	if (n / 10 == 0)
		_putchar(n + '0');
	else
	{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
}
