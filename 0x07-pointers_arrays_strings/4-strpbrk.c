#include "main.h"
/**
 *_strpbrk - searches strings of byte
 *@s: string
 *@accept: string to be matched
 *Return: pointer to char
 */
char *_strpbrk(char *s, char *accept)
{
	int i, a;

	a = 0;

	for (i = 0; accept[i] != '\0'; i++)
	{
		if (accept[i] == s[i])
		{
			a = i - 1;
			break;
		}
	}
	if (a == 0 && (accept[0] != s[0]))
		return (0);
	else
		return (s + a);
}
