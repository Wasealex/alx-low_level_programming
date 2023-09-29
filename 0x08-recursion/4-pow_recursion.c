#include "main.h"
/**
 *_pow_recursion - power function
 *@x: base number
 *@y: exponent number
 *
 *Return: -1 if y is less than 0 , 1 if y is 0
 */
int _pow_recursion(int x, int y)
{
	int result = 1;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y == 1)
	{
		return (x);
	}
	result = x * _pow_recursion(x, y - 1);
	return (result);
}
