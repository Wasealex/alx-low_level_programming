#include "main.h"
/**
 *fet_endianness - checks the order of stored in memory
 *big endiannes stores most significant byte in small address
 *little endiannes stores least signigicant byte in smallest address
 *Return: 0 for the first 1 for the second
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *c;

	c = (char *)&num;/*points to the first byte of intiger num*/
	if (*c == 1)/*first byte look like 0x01*/
		return (1);
	else/*first byte look like 0x00*/
		return (0);
}
