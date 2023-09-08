#include <stdio.h>
/**
 *main - Entry mode
 *Return: always 0 if success other wise error
 */
int main(void)
{
	int a, b, c, d = a = b = c = d = 47;

	while (a < 57)
	{
		a++;
		while (b < 57)
		{
			b++;
			while (c < 57)
			{
				c++;
				while (d < 57)
				{
					d++;
					if (a == c && b == d)
					{
						continue;
					}
					if (a == c && b > d)
					{
						continue;
					}
					if (a > c)
					{
						continue;
					}
					putchar(a);
					putchar(b);
					putchar(' ');
					putchar(c);
					putchar(d);
					if (a == 57 && b == 56 && c == 57 && d == 57)
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
				d = 47;
			}
			c = 47;
		}
		b = 47;
	}
	putchar('\n');
	return (0);
}
