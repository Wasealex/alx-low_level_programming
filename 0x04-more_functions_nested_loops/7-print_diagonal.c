#include "main.h"
/**
 *print_diagonal - prints \ diagonal line
 *@n: number of lines to be drawn
 *Return: diagonal lines if no error
 */
void print_diagonal(int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
			_putchar('#');
			_putchar('\n');
	}
	_putchar('\n');
}
