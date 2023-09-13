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

	j = j % 10;
	last_digit = _putchar(j + '0');
	return (last_digit);
}
