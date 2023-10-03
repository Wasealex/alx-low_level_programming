#include "main.h"
/**
 *create_array - creates an array of chars initialiezed with specific char
 *@size: size of the array
 *@c: a character
 *Return: a pointer otherwise NULL
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		arr = malloc(size * sizeof(char));

		for (i = 0; i < size; i++)
		{
			*(arr + i) = c;
		}
	}
	if (arr == NULL)
		return (NULL);
	else
		return (arr);
}
