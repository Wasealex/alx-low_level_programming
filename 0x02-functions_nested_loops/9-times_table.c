#include "main.h"
/**
 *times_table - prints the 9 times table, starting with 0.
 *
 *
 *Return: the time table if no error
 *
 */
void times_table(void)
{
	int a, b, pr;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			pr = a * b;
			if (pr <= 9)
			{
				_putchar(pr + '0');
			}
			if (pr > 9)
			{
				_putchar(pr / 10 + '0');
				_putchar(pr % 10 + '0');
			}
			if (a <= 9 && b == 9)
			{
				break;
			}
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
