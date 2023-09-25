#include "main.h"
/**
 *print_diagsums - prints diagonal numbers sums
 *@a: matrix
 *@size: no of matrix
 *Return: sum of numbers
 */
void print_diagsums(int *a, int size)
{
	int i, sum1, sum2;

	sum1 = sum2 = 0;

	for(i = 0; i < size; i++)
	{
		sum1 = sum1 + *(a + i * size + i);
		sum2 = sum2 + *(a + i * size - i);
	}
	printf("%d, %d\n", sum1, sum2);
}
