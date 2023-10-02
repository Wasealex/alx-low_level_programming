#include "main.h"
/**
 *main - entry point
 *@argc: count to arguments
 *@argv: vector to arguments
 *Return: 0 if success
 */
int main(int argc, char **argv)
{
	int sum, i;

	sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]))
		{
			sum += atoi(argv[i]);
		}
		else
		{	printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
