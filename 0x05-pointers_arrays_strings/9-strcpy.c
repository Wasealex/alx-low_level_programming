#include "main.h"
/**
 *_strcpy - to copy from source string to desitination string
 *@dest: string 2
 *@src: string 1
 *Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';
	return (dest);
}
