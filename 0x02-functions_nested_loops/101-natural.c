#include <stdio.h>
/**
 *main - prints sum of multiples of 3 and 5 less than 1024
 *
 *Return: - return 0 if success
 */
int main(void)
{
	int a, b, c, sum;

	sum = 0;

	for (a = 1; a < 1024; a++)
	{
		b = a % 3;
		c = a % 5;
		if (b == 0 || c == 0)
		{
			sum = sum + a;
		}
	}
	printf("%d\n", sum);

	return (0);
}
