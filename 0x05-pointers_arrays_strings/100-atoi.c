#include "main.h"
/**
 *_atoi - convert to intiger
 *@s: string
 *Return: 0 if there r no numbers in the string
 */
int _atoi(char *s)
{
	int a, temp;

	for (a = 0; s[a] != '\0'; a++)
		temp = s[a];
	if (temp != 0)
		return (temp);
	else
		return (0);
}
