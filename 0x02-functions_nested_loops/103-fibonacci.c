#include <stdio.h>
/**
 *main - entry point
 *
 *
 *Return: always 0
 */
int main(void)
{
	int first, second, third, sum;

	first = 1;
	second = 2;

	sum = 0;

	for (; third < 4000000;)
	{
		third = first + second;
		first = second;
		second = third;
		if (third % 2 == 0)
		{
			sum = sum + third;
		}
	}
	printf("%d\n", sum);
	return (0);
}
