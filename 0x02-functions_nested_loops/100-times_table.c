#include "main.h"
/**
 *print_times_table - sets a time table of given number n
 *@n: number to be done
 *Return: returns a table if no error
 */
void print_times_table(int n)
{
	int a, b, c;

	if (n <= 10 && n > 0)
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				c = a * b;
				if (c / 10 == 0)
				{
					if (b == 0)
					{
						_putchar('0');
					}
					if (b != 0)
					{
						_putchar(' ');
						_putchar(c + '0');
					}
					if (b < n)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
					}
				}
				else
				{
					_putchar ((c / 10) + '0');
					_putchar ((c % 10) + '0');
					if (b < n)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
					}
				}
			}
			_putchar('\n');
		}
	}
}
