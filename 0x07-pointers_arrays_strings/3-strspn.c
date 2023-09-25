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
	unsigned int count = 1;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[j] == accept[i])
			{
				count++;
				break;
			}
		}
	}
	return (count);
}
