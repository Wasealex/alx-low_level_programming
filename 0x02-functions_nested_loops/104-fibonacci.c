#include <stdio.h>
/**
 *main - entry point
 *
 *Return: 0
 */
int main(void)
{
	int first, second, series;
	unsigned int third;

	first = 1;
	second = 2;
	printf("1, 2, ");

	for (series = 0; series < 98; series++)
	{
		third = first + second;
		first = second;
		second = third;
		printf("%u, ", third);
	}
	return (0);
}
