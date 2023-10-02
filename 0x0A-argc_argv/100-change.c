#include "main.h"
/**
 *main - Entry point
 *@argc: count of arguments
 *@argv: vector of arguments
 *Return: 0 if success
 *return 1 and print ERROR otherwise
 */
int main(int argc, char **argv)
{
	int cents, count, i;
	int coin[6] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	count = 0;
	cents = atoi(argv[1]);
	for (i = 0; i < 5; i++)
	{
		count = count + (cents / coin[i]);
		cents = cents % coin[i];
	}
	if (cents < 0 || count < 0)
		printf("0\n");
	else
		printf("%d\n", count);
	return (0);
}
