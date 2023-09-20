#inlcude "main.h"
/**
 *_strcat - concantenate to strings
 *@dest: a string of destination
 *@src: a string of source
 *Return: 0 if success
 */
char *_strcat(char *dest, char *src)
{
	int i, dl, sl;

	for (i = 0; dest[i] != '\0'; i++)
	{
		dl++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		sl++;
	}
	for (i = 0; i < sl; i++)
	{
		dest[i + dl] = src[i];
	}
}
