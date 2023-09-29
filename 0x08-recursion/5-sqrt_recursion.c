#include "main.h"
/**
 *_sqrt_recursion - natural square root number finder
 *@n: number positive number
 *
 *Return: -1 if negative and 0 if success
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
		return (sqrth(n, 1));
}
/**
 *sqrth - tries natural numbers untill it finds n
 *@n: number squared to be compared to
 *@trial: multiplying numbers starting from 1
 *Return: 0 if success
 */
int sqrth(int n, int trial)
{
	if (trial * trial == n)
	{
		return (trial);
	}
	else if (trial * trial > n)
	{
		return (-1);
	}
	else
		return (sqrth(n, trial + 1));
}
