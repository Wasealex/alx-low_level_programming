#include "main.h"
/**
 *factorial - factorial of a given number
 *@n: number to factored
 *
 *Return: 0 if success and -1 if n < 0
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	n = n * factorial(n - 1);
	return (n);
}
