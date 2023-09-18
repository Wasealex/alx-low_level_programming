#include "main.h"
/**
 *rev_string - reverse a string
 *@s: string
 *Return: string if a success
 */
void rev_string(char *s)
{
	int a, b, len, temp;

	while (s[a] != '\0')
	{
		len++;
		a++;
	}
	for (b = 0; b < len / 2; b++)
	{
		temp = s[b];
		s[b] = s[len - b - 1];
		s[len - b - 1] = temp;
	}
}
