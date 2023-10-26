#include "main.h"
/**
 *clear_bit - delete a bit at a given index
 *@n: pointer to an intiger
 *@index: the index of bit you want to set
 *Return: 1 if it worked -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n = *n ^ (1 << index);

	return (1);
}
