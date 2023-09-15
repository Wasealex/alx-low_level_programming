#include "main.h"
/**
 *more_numbers - prints numbers 10 times for 1 to 14
 *
 *Return: numbers if no error
 *
 */
void more_numbers(void)
{
	int first, second, last, series;

	last = 0;
	for (series = 0; series < 10; series++)
	{

		while (last < 15)
		{
			if (last < 10)
			{
				second = last;
			}
			else
			{
				first = last / 10;
				second = last % 10;
				_putchar(first + '0');
			}
			_putchar(second + '0');
			last++;
		}
		last = 0;
		_putchar('\n');
	}
}
