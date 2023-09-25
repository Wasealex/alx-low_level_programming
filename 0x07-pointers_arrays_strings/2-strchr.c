#include "main.h"
/**
 *_strchr - identify a character
 *@s: a string
 *@c: a character
 *Return: pointer to char
 */
char *_strchr(char *s, char c)
{
	int i, a;

	a = 0;

	for (i = 0; s[i] != '\0';i++)
	{
		if (s[i] == c)
			a = i;
	}
	return (s + a - 1);
}
