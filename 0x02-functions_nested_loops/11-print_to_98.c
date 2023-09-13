#include "main.h"
/**
 *print_to_98 - prints number from given n number to 98
 *@n: number to be started from
 *
 *Return: return numbers untill 98
 */
void print_to_98(int n)
{
	int a, b;

	for (a = n; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			_putchar(a + '0');
			_putchar(b + '0');
			if (a == 9 && b == 8)
			{
				break;
			}
			_putchar(',');
			_putchar(' ');
		}
	}
}
