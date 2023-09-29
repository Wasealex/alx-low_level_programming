#include "main.h"
/**
 *is_prime_number - checks if the number is primenumber
 *@n: number
 *
 *Return: 0 if composite number 1 if prime number
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	else
		return (divi(n, n - 1));
}
/**
 *divi - checks divisible by number strating from d - 1
 *@n: numerator number
 *@d: denomenator untill it reach 1
 *Return: 0 if n is divisble by d other than 1
 */
int divi(int n, int d)
{
	if (d == 1)
	{
		return (1);
	}
	else if (n % d == 0)
		return (0);
	else
		return (divi(n, d - 1));
}
