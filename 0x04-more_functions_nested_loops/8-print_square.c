#include "main.h"
/**
 *print_square - prints square
 *@size: is the size of the square
 *
 *Return: a square if no error
 */
void print_square(int size)
{
	int a, b;

	for (a = 0; a < size; a++)
	{
		for (b = 0; b < size; b++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
