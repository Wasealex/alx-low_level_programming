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
	long long int sum;

	first = 1;
	second = 2;
	sum = first + second;
	printf("%d, %d, ", first, second);

	for (series = 1; series < 50; series++)
	{
		sum = first + second;
		first = second;
		second = sum;
		printf("%llu, ", sum);
	}
	printf("\n");

	return (0);
}
