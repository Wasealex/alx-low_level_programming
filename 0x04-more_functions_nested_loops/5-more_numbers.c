#include "main.h"
/**
 *more_numbers - prints numbers 10 times for 1 to 14
 *
 *Return: numbers if no error
 *
 */
void more_numbers(void)
{
	int a, series;

	for (series = 0; series < 10; series++)
	{
		for (a = 0; a <= 14; a++)
		{
			if (a / 10 == 0)
				_putchar(a + '0');
			else
			{
				_putchar(a / 10 + '0');
				_putchar((a % 10) + '0');
			}
		}
	}
}
