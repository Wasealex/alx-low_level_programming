#include "main.h"
/**
 *rev_string - reverse a string
 *@s: string
 *Return: string if a success
 */
void rev_string(char *s)
{
	int num = 0;
	int total = 0;

	while (s[num] != '\0')
	{
		total++;
		num++;
	}
	for (total = total - 1; total >= 0; total--)
	{
		_putchar(s[total]);
	}
	_putchar('\n');
}
