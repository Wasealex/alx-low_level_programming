#include "main.h"
/**
 *_puts - prints a string in stdout
 *@str: string
 *
 *Return: a string if no error
 */
void _puts(char *str)
{
	int print = 0;
	int d = 0;

	while (str[print] != '\0')
	{
		d = str[print];
		_putchar(d);
		print++;
	}
	_putchar('\n');
}
