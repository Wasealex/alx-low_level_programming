#include "main.h"
/**
 *set_bit - set 1 at given index
 *@n: address of a given number
 *@index: index at which to set 1
 *Return: 1 if successfull otherwise -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	n[index] = 1;

	return (1);
}
