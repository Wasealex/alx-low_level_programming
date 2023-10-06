#include "main.h"

/**
 *_putchar - prints single character to std output
 *@c: a character to be puted
 *Return: 1 in success, on error -1 
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
