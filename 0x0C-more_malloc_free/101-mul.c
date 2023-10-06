#include "main.h"
/**
 *main - entry point
 *@argc:  argument count
 *@argv: argument vector
 *
 */
int main(int argc, char **argv)
{
	if (argc <= 2 || atoi(argv[1]) == 0 || atoi(argv[2]) == 0)
	{
		printf("Error\n");
		exit (98);
	}
	else
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
