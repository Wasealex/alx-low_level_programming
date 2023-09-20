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
	for (i = 0; src[i] != '\0'; i++)
	{
		sl++;
	}
	for (i = 0;src[n] != '\0' && i < n; i++)
	{
		dest[dl + i] = src[i];
	}
	return (dest);
}
