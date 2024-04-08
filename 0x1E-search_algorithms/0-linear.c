#include "search_algos.h"
/**
 *linear_search - searching algorithm linear of an array
 *@array: array to be searched
 *@size: size of an array
 *@value: value to be taken
 *Return:  first index where value is located otherwise -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]", i, array[i]);
		putchar('\n');
		if (value == array[i])
			return (i);
	}
	return (-1);
}
