#include "search_algos.h"
/**
 *binary_search - search algorithm using binary search
 *@array: a pointer to the first element of a sorted array
 *@size: is the number of elements in array
 *@value: value is the value to search for
 *Return: the index where value is located otherwise -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t middle, i;

	if (array == NULL)
		return (-1);
	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = 0; i < right && (left + i) < right ; i++)
		{
			printf("%d, ", array[left + i]);
		}
		printf("%d\n", array[right]);
		middle = left + (right - left) / 2;
		if (array[middle] == value)
			return (middle);
		if (array[middle] < value)
			left = middle + 1;
		else
			right = middle - 1;
	}
	return (-1);
}
