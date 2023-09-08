#include <stdio.h>
/**
 *main - Entry
 *
 *Return: always 0
 */
int main(void)
{
	int a = 47;
	int b = 47;

	while (a < 57)
	{
		a++;
		while (b < 57)
		{
			b++;
			if (a == b)
			{
				continue;
			}
			putchar (a);
			putchar (b);
			putchar (',');
			putchar (' ');
		}
		b = 47;
	}
	putchar('\n');
	return (0);
}
