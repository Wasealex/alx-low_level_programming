#include "main.h"
/**
 *_strlen - length of a string
 *@s: string
 *Return: number
 */
int _strlen(char *s)
{
	int length = 0;
	int str = 0;

	while (s[str] != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
