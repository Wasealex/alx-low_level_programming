#include "main.h"
/**
 *get_bit - thr bit at given index
 *@n: number to be checked
 *@index: at bit
 *Return: bit at index otherwise -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;
	unsigned int i;

	for (i = 0, bit = 0; i < index; i++)
	{
		bit = (n >> 1 & 1);
	}

	return (bit);
}
