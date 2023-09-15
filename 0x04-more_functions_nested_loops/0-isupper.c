#include "main.h"
/**
 *_isupper - checkes for upper case
 *@c: a character to be processed
 *
 *Return: 1 if c is upper case other wise return 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
