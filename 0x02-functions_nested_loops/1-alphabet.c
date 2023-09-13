#include "main.h"
/**
 *print_alphabet - prints letters in lower case from a to z
 *
 *Return: alphabets if no error
 */
void print_alphabet(void)
{
	int a = 97;

	while (a < 123)
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
