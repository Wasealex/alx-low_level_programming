#include "main.h"
/**
 *_strlen_recursion - length of a string using a recursion
 *@s: string
 *
 *Return: 0 if success
 */
int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s == '\0')
	{
		return (0);
	}
	count = _strlen_recursion(s + 1) + 1;
	return (count);
}
