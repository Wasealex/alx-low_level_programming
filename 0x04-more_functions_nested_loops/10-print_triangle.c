#include "main.h"
/**
 *print_triangle - prints triangle
 *@size: size of the triangle
 *Return: triangle
 */
void print_triangle(int size)
{
	int a;

	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
