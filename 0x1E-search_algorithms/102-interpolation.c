#include "search_algos.h"
/**
 *interpolation_search - use search algorithm interpolation
 *@array: pointer to first element of the array
 *@size: size of the array
 *@value: value to be search
 *Return: returns the index found of the value otherwise -1
 *size_t pos = low +
 *                  (((double)(high - low) /
 *                           (array[high] - array[low])) * (value - array[low]))
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t pos;

	if (array == NULL)
		return (-1);
	while (low <= high)
	{
		pos = low + (((high - low) / (array[high] - array[low])) * (value - array[low]));

		if (pos >= size)
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			return (-1);
		}

		if (array[pos] == value)
		{
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
			return (pos);
		}

		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);

		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}
	return (-1);
}
