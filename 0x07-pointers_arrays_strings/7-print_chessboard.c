
#include "main.h"
/**
 *print_chessboard - function that prints chessboard
 *@board: matrix array
 *
 *Return: 0 if success
 */
void print_chessboard(char (*a)[8])
{
	int i, b;

	for (i = 0; i < 8; i++)
	{
		for (b = 0; b < 8; b++)
		{
			_putchar(a[i][b]);
		}
		_putchar('\n');
	}
}
