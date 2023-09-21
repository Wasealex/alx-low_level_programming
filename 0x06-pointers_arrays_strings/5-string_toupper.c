#include "main.h"
/**
 *String_toupper - letters to uppper case
 *@str: a string
 *
 *Return: a pointer to char (string)
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] > 'a' && str[i] < 'z')
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
