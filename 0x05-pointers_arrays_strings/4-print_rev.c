#include "main.h"
/**
 *print_rev - output a string in reverse
 *@s: string
 *
 *Return: a string
 */
void print_rev(char *s)
{
	int print = 0;
	int total = 0;

	while (s[print] != '\0')
	{
		total++;
		print++;
	}
	for (total--; total >= 0; total--)
	{
		_putchar(s[total]);
	}
	_putchar('\n');
}
