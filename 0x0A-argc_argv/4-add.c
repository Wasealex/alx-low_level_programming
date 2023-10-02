#include "main.h"
/**
 *main - entry point
 *@argc: count to arguments
 *@argv: vector to arguments
 *Return: 0 if success
 */
int main(int argc, char **argv)
{
	int sum, i, num;

	sum = 0;

	for (i = 1; i < argc; i++)
	{
		num = atoi(argv[i]);
		if (num)
		{
			sum = sum + num;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
