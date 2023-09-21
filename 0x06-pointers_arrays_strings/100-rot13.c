#include "main.h"
/**
 *rot13 - rot13 code language
 *@s: string
 *
 *Return: a pointer to char
 */
char *rot13(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		while ((s[i] <= 'M') && (s[i] >= 'A'))
		{
			s[i] = s[i] + 13;
		}
		if ((s[i] <= 'Z') && (s[i] >= 'N'))
		{
			s[i] = s[i] - 13;
		}

	}
	return (s);
}
