#include "main.h"
/**
 *print_array - prints values of arrays
 *@a: string
 *@n: number of elements of the array to be printed
 *Return: values of array if success
 */
void print_array(int *a, int n)
{
	int index, temp;

	for (index = 0; index < n; index++)
	{
		temp = a[index];
		printf("%d", temp);
		if (index != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
