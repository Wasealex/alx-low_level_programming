#include "main.h"
/**
 *_isdigit - checks if it is a number
 *@c: an imput to be processed
 *Return: 1 if it is number
 *returns 0 if it is not
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
