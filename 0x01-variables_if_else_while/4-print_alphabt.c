#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: always 0
 */
int main(void)
{
	int n = 96;

	while (n < 122)
	{
		++n;
		if (n == 101 || n == 113)
		{
			continue;
		}
		putchar(n);
	}
	putchar('\n');

	return (0);
}
