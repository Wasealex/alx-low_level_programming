#include "main.h"
/**
 *_strpbrk - searches strings of byte
 *@s: string
 *@accept: string to be matched
 *Return: pointer to char
 */
char *_strpbrk(char *s, char *accept)
{
	for (i = 0; s[i] != '\0' || accept[i] != '\0'; i++)
	{
		if (accept[i] == s[i])
			return (s);
	}
	return (s);
}
