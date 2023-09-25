#include "main.h"
/**
 *_strstr - locates substring
 *@haystack: string
 *@needle: string
 *
 *Return: pointer to a char
 */
char *_strstr(char *haystack, char *needle)
{
	int i, a;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[i])
		{
			a = i;
		}
	}
	if (a == 0)
		return (0);
	else
		return (haystack);
}
