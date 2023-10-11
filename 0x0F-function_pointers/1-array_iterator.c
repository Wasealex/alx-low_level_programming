#include "function_pointers.h"
/**
 *array_iterator - executes a function that
 *is given as parameters on each elements
 *@array: the fisrt array intiger
 *@size: size of the array
 *@action: excuting function pointer
 *Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
