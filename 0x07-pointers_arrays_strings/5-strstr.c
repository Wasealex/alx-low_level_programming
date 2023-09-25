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
		if (needle[i] == haystack[i])
		{
			a = i;
		}
	}
	if (a == 0 && (needle[0] != haystack[0]))
		return (NULL);
	else
		return (needle);
}
