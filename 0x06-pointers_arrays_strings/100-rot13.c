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
		if (s[i] <= 'z' && s[i] >= 'n')
		{
			s[i] = s[i] - 13;
		}
		while (s[i] <= 'm' && s[i] >= 'a')
		{
			s[i] = s[i] + 13;
		}
	}
	return (s);
}
