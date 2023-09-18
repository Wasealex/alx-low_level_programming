#include "main.h"
/**
 *_strcpy - to copy from source string to desitination string
 *@dest: string 2
 *@src: string 1
 *Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int a, b, len;

	for (a = 0; src[a] != '\0'; a++)
	{
		len = a;
	}
	for (b = 0; b <= len + 1 || dest[b] != '\0'; b++)
	{
		dest[b] = src[b];
	}
	return (dest);
}
