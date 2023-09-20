#include "main.h"
/**
 *reverse_array - reverse a string
 *@a: an array
 *@n: number of elements in an array
 *Return: void
 */
void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; a[i] != '\0' && i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n / 2 - i - 1];
		a[n / 2 - 1 - i] = tmp;
	}
}
