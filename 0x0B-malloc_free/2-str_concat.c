#include "main.h"
/**
 *str_concat - concatenate 2 strings
 *@s1: first string
 *@s2: second string
 *Return: a sring pointer
 *Null other wise
 */
char *str_concat(char *s1, char *s2)
{
	int i, len1, len2;
	char *str;

	len1 = strlen(s1);
	len2 = strlen(s2);
	str = malloc(len1 + len2 + 1);

	if (str == NULL)
		return (NULL);
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; i < len1 + len2; i++)
	{
		str[i] = s1[i];
	}
	for (i = 0; i <= len2; i++)
	{
		str[len1 + i] = s2[i];
	}
	return (str);
}
