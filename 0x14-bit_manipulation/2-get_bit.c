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

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	for (i = 0, bit = 0; i < index; i++)
	{
		if (n >> 1 & 1)
			bit = 1;
	}

	return (bit);
}
