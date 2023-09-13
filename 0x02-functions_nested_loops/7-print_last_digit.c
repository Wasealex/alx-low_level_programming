#include "main.h"
/**
 *print_last_digit - prints the last digit of a number
 *@j: number to be processed
 *
 *Return: last single digit number
 */
int print_last_digit(int j)
{
	int last_digit;

	if (j < 0)
	{
		j = -1 * j;
		last_digit = j % 10;
		_putchar(last_digit + '0');
		return (last_digit);
	}
	else
	{
		j = j % 10;
		last_digit = _putchar(j + '0');
		return (last_digit);
	}
}
