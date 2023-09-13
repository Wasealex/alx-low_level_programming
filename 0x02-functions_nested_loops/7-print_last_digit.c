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
		last_digit = -1 * (j % 10);
		_putchar(last_digit + '0');
		return (last_digit);
	}
	else
	{
		last_digit = j % 10;
		_putchar(last_digit + '0');
		return (last_digit);
	}
}
