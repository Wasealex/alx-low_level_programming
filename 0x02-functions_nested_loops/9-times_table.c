#include "main.h"
/**
 *times_table - prints the 9 times table, starting with 0.
 *Return: the time table if no error
 */
void times_table(void)
{
	int a, b, pr;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			pr = a * b;
			if ((pr / 10) == 0)
			{
				if (b == 0)
				{
					_putchar('0');
				}
				if (b != 0)
				{
					_putchar(' ');
					_putchar((pr % 10) + '0');
				}
				if (b < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				_putchar(pr / 10 + '0');
				_putchar(pr % 10 + '0');
				if (b < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
