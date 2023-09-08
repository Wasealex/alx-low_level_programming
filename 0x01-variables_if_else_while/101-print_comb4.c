#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: always 0
 */
int main(void)
{
	int a, b, c;

	a = b = c = 47;

	while (a < 57)
	{
		a++;
		{
			while (b < 57)
			{
				b++;
				while (c < 57)
				{
					c++;
					putchar(a);
					putchar(b);
					putchar(c);
					putchar(',');
					putchar(' ');
				}
				c = 47;
			}
			b = 47;
		}
	}
		putchar('\n');
		return (0);
}
