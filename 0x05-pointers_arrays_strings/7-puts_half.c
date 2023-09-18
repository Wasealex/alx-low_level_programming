#include "main.h"
/**
 *puts_half - half of the string
 *@str: string
 *Return: string
 *
 */
void puts_half(char *str)
{
	int a, len, b;

	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	len = a + 10;
	for (b = 0; b < len - 1; b++)
	{
		_putchar(str[(len) / 2 + b]);
	}
	_putchar('\n');
}
