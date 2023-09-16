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
			for (b = size - 1; b > 0; b--)
			{
				_putchar(' ');
			}
			for (c = size; c > 0; c--)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	if (size <= 0)
		_putchar('\n');
}
