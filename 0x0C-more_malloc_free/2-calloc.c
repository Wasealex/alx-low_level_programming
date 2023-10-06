#include "main.h"
/**
 *_calloc - creating calloc function using malloc
 *@nmemb: number of elements
 *@size: bytes of each block
 *Return: pointer to an array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *arr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	arr = malloc(sizeof(arr) * nmemb);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
	{
		arr[i] = 0;
	}
	return (arr);
}
