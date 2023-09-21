#include "main.h"
/**
 *_strncat - concantinate two strings
 *@dest: string of destination
 *@src: string of source
 *@n: number of bytes of src string
 *Return: a pointer to char
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, dl, sl;

	dl = sl = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		dl++;
	}
	for (sl = 0; src[sl] != '\0' && n > 0; sl++, n--, dl++)
	{
		dest[dl] = src[sl];
	}
	return (dest);
}
