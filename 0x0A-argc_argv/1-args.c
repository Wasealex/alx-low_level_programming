#include "main.h"
/**
 *main - entry point
 *@argc: count of arguments
 *@argv: vector of arguments
 *Return: 0 if success
 */
int main(int argc, char **argv)
{
	int count, i;

	for (i = 0; argv[i] < argv[argc - 1]; i++)
	{
		count++;
	}
	_putchar(count + '0');
	_putchar('\n');
	return (0);
}
