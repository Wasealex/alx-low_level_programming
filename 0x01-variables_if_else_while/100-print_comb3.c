#include <stdio.h>
/**
 *main - Entry
 *
 *Return: always 0
 */
int main(void)
{
	int a = 47;
	int b = 48;

	while (a < 57)
	{
		a++;
		while (b < 58)
		{
			putchar (a);
			putchar (b);
			putchar (',');
			putchar (' ');
			b++;
		}
		b = 48;
	}
	putchar('\n');
	return (0);
}
