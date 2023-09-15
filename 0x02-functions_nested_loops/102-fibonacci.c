#include <stdio.h>
/**
 *main - entry point print
 *
 *
 *Return: always 0
 */
int main(void)
{
	int first, second, series;
	long sum;

	first = 1;
	second = 2;
	sum = first + second;
	printf("%d, %d, ", first, second);

	for (series = 1; series < 50; series++)
	{
		sum = first + second;
		first = second;
		second = sum;
		printf("%d, ", sum);
	}
	printf("\n");

	return (0);
}
