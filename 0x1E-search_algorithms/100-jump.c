#include "search_algos.h"
/**
 *jump_search - search algorithm using jump search
 *(square root of the size of the array as the jump step.)
 *@array:is a pointer to the first element of the array
 *@size:sizeof the array
 *@value:value to be searched for
 *Return:the first index where value is located
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i;
	size_t start = 0;
	size_t end = sqrt(size);

	if (array == NULL)
		return (-1);

	printf("Value checked array[%ld] = [%d]\n", start, array[start]);
	while (array[end] < value && end < size)
	{
		start = end;
		printf("Value checked array[%ld] = [%d]\n", start, array[start]);
		end = end + sqrt(size);
	}
	printf("Value found between indexes [%ld] and [%ld]\n", start, end);
	for (i = start; i <= end && i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
