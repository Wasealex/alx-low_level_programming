#include "main.h"
/**
 *_strspn - gets the length of the prefix substring
 *@s: string
 *@accept: a string to be matched
 *Return: an intiger of the length
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
				count++;
		}
	}
	return (count);
}
