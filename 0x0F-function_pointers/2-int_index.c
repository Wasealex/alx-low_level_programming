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

	if (array != NULL && cmp != NULL && size != 0)
	{
		for (i = 0; i < size; i++)
		{
			count = cmp(array[i]);
			if (count == 1)
				return (i);
		}
	}
	return (-1);
}
