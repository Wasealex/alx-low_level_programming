#include "main.h"
/**
 *main - entry point
 *@argc: count of arguments
 *@argv: argument vectors
 *
 *Return: 0 if success
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; (*(argv[argc - 1] + i)) != '\0'; i++)
		{
			_putchar(*(argv[0] + i));
		}
	_putchar('\n');
	
	return (0);
}
