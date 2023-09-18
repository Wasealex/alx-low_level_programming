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
	len = a;
	for (b = len / 2; str[b] != '\0'; b++)
	{
		_putchar(str[b]);
	}
	_putchar('\n');
}
