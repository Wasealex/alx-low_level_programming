#include "main.h"
/**
 *main - entry point
 *@argc: count of arguments
 *@argv: vector of arguments
 *Return: 0 if success
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; argv[i] != argv[argc]; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
