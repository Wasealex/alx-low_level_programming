#include "main.h"
/**
 *_abs - computes absolute value of an integer
 *@j: number to be computed
 *Return: postive value if no error
 *
 */
int _abs(int j)
{
	if (j < 0)
	{
		j = -1 * j;
	}
	else
	{
		j = j;
	}
	return (j);
}
