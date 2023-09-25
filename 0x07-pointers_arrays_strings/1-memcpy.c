#include "main.h"
/**
 *_memcpy - copy memory area including null
 *@dest: string to be copied
 *@src: string to be copied from which is not modified
 *@n: number of bytes to be pasted
 *Return: dest string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	int tmp;

	for (i = 0; i < n; i++)
	{
		tmp = src[i];
		src[i] = dest[i];
		dest[i] = tmp;
	}

	return (dest);
}
