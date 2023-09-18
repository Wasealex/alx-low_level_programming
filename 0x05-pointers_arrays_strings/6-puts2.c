#include "main.h"
/**
 *puts2 - print every other character
 *@str: string
 *Return: string when success
 *
 */
void puts2(char *str)
{
	int a, len, b;

	for (a = 0; str[a] != '\0'; a++)
	{
		len = a;
	}

	for (b = 0; b <= len ; b++)
	{
		if (b % 2 == 0 && str[b] != '\0')
		{
			_putchar(str[b]);
		}
	}
	_putchar('\n');
}
