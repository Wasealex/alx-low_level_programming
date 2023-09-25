#include "main.h"
/**
 *_memset - sets the same number of bytes
 *@s: a string to be processed
 *@b: a char to be replacing
 *@n: number of bytes to be set
 *Return: a pointer to char
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	int sl = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		sl++;
	}

	for (i = 0; s[sl] != '\0' && i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
