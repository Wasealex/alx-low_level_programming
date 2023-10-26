#include "main.h"
/**
 *flip_bits - how many bits do you need to flip a number to the other
 *@n: first number
 *@m: second number
 *Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bit, count;

	bit = m ^ n;

	count = 0;
	while (bit != 0)
	{
		count = count + (bit & 1);
		bit = bit >> 1;
	}

	return (count);
}
