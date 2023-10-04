#include "main.h"
/**
 *alloc_grid - 2 dimensional arrays of 0
 *@width: colums
 *@height: rows
 *Return: pointer to twodimensional array
 *Null if failure
 */
int **alloc_grid(int width, int height)
{
	int i, j, len;
	int **darr;
	int *ptr;

	len = 0;

	len = sizeof(int *) * height + sizeof(int) * width * height;

	darr = (int **)malloc(len);
	ptr = (int *)(darr + height);

	for (i = 0; i < height; i++)
	{
		darr[i] = (ptr + width * i);
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			darr[i][j] = 0;
		}
	}

	return (darr);
}
