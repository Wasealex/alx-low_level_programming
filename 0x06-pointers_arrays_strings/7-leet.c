#include "main.h"
/**
 *leet - leet communication
 *@s: string
 *Return: pointer to char
 */
char *leet(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == 'a' || s[i] == 'A')
		{
			s[i] = '4';
		}
		while (s[i] == 'e' || s[i] == 'E')
		{
			s[i] = '3';
		}
		while (s[i] == 'o' || s[i] == 'O')
		{
			s[i] = '0';
		}
	}
	return (s);
}
