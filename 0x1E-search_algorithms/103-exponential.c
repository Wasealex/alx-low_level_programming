#include "search_algos.h"
/**
 *exponential_search - search algorithm using exponential
 *@array: pointer to first element of the array
 *@size: size of the array
 *@value: value to searched
 *Return: index of which the value is found other wise -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t left, right = 1, middle, i;

	if (array == NULL)
		return (-1);
	while (right < size && array[right] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", right, array[right]);
		right = right * 2;
	}
	left = right / 2;
	right = (right < size - 1) ? right : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", left, right);
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
