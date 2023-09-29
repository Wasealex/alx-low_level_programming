#include "main.h"
/**
 *_puts_recursion - puts function using recurssion
 *@s: string
 *
 *Return: a string with a new line
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
