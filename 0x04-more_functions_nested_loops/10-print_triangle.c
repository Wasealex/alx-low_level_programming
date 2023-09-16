#include "main.h"
/**
 *print_triangle - prints triangle
 *@size: size of the triangle
 *Return: triangle
 */
void print_triangle(int size)
{
	int a, b, c;

	if (size >= 0)
	{
		for (a = 0; a < size; a++)
		{
			for (b = size - 1 - a; b > 0; b--)
			{
				putchar(' ');
			}
			for (c = a + 1; c > 0; c--)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
