#include "main.h"
/**
 *_strdup - copy a string to a newlly allocated memory
 *@str: a string
 *Return: a string otherwise NULL
 */
char *_strdup(char *str)
{
	int i;
	char *nstr;

	if (str == NULL)
	{
		return (NULL);
	}
	nstr = malloc(strlen(str) * sizeof(*nstr) + 1);

	if (nstr != NULL)
	{
		for (i = 0; *(str + i) != '\0'; i++)
		{
			*(nstr + i) = *(str + i);
		}
		return (nstr);
	}
	else
		return (NULL);
}
