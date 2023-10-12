#include "variadic_functions.h"
/**
 *sum_them_all - the sum of all parameters
 *@n: the number of arguments
 *Return: sum
 *return 0 if n is 0
 */
int sum_them_all(const unsigned int n, ...)
{
	int total, nums;
	unsigned int i;
	va_list args;

	total = 0;
	if (n == 0)
	{
		return (0);
	}
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		nums = va_arg(args, int);
		total = total + nums;
	}
	va_end(args);

	return (total);
}
