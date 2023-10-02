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
	int cents;

	cents = atoi(argv[1]);
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (cents < 0)
		printf("0\n");
	else
		printf("%d\n", cents);

	return (0);
}
