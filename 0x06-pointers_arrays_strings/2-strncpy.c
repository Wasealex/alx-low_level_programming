#include "main.h"
/**
 *_strncpy - copys string
 *@dest: string of destination
 *@src: string of source
 *@n: number of bytes
 *Return: pointer to char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
