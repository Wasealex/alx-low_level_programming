#include "main.h"
/**
 *print_triangle - prints triangle
 *@size: size of the triangle
 *Return: triangle
 */
void print_triangle(int size)
{
	int a;

	for (a = 0; a < size; a++)
	{
		_putchar('#');
	}
	_putchar('\n');
}
