#include "main.h"
/**
 *array_range - create an array of intigers
 *@min: strating from
 *@max: finishing to
 *Return: pointer to intiger
 */
int *array_range(int min, int max)
{
	int range, i;
	int *arr;

	if (min > max)
		return (NULL);

	range = (max - min) + 1;

	arr = malloc(sizeof(*arr) * range);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < range; i++)
	{
		*(arr + i) = min + i;
	}
	return (arr);
}
