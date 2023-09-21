#include "main.h"
/**
 *print_number - prints numbers
 *@n: number to be printed
 *Return: numbers
 */
void print_number(int n)
{
	if (n < 0)
	{
		n = -1 * n;
		_putchar('-');
	}
	if (n / 10 == 0)
		_putchar(n + '0');
	else if (n / 100 == 0)
	{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	else if (n / 1000 == 0)
	{
		_putchar(n / 100 + '0');
		_putchar((n % 100) / 10 + '0');
		_putchar(n % 10 + '0');
	}
	else if (n / 10000 == 0)
	{
		_putchar(n / 1000 + '0');
		_putchar((n % 1000) / 100 + '0');
		_putchar((n % 100) / 10 + '0');
		_putchar(n % 10 + '0');
	}
	else
	{
		_putchar(n / 10000 + '0');
		_putchar((n % 10000) / 1000 + '0');
		_putchar((n % 1000) / 100 + '0');
		_putchar((n % 100) / 10 + '0');
		_putchar(n % 10 + '0');
	}
}
