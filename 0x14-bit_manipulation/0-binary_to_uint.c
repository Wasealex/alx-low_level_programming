#include "main.h"
/**
 *binary_to_uint - converts binary number to unsigned int
 *@b: binary numbers
 *Return: the converted number or 0 if b contains other than binary digit
 *or NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num, i, result;

	if (b == NULL)
		return (0);
	for (num = 0; b[num] != '\0'; num++)
	{
		if (b[num] != '0' && b[num] != '1')
			return (0);
	}

	for (i = num - 1, result = 0; i < num; i--)
	{
		if (b[i] == '1')
			result = result +  power(num - 1 - i);
	}
	return (result);
}
/**
 *power - base to exposnent
 *@exponent: number of times 2 is multipled
 *Return: power function of base 2
 */
unsigned int power(unsigned int exponent)
{
	unsigned int i, result = 1;

	for (i = 0; i < exponent; i++)
	{
		result = result * 2;
	}
	return (result);
}
