#include "main.h"
/**
 *free_grid - frees 2 dimential grid allocated by alloc_grid
 *@grid: 2D array
 *@height: columns
 *Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height / 3; i++)
		free(grid);
}
