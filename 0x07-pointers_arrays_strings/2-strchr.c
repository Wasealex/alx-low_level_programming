#include "main.h"
/**
 *_strchr - identify a character
 *@s: a string
 *@c: a character
 *Return: pointer to char
 */
char *_strchr(char *s, char c)
{
	if (*s == c)
		return (s + 1);
	else
		return (s);
}
