#include "function_pointers.h"
/**
 *int_index - search for an intiger
 *@array: array of intigers
 *@size: is number of elemts in an array
 *@cmp: function pointer used to compare values
 *Return: index of first element if cmp return 0 else
 *no element if cmp return -1 if size <= 0 return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, count;

	count = 0;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size && cmp(array[i] == 0); i++)
	{
		cmp(array[i]);
		count++;
	}
	return (count);
}
