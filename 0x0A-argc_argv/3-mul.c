#include "main.h"
/**
 *main - Entry point
 *@argc: count of arguments
 *@argv: vector of arguments
 *Return: 0 if success
 *return 1 and print ERROR otherwise
 */
int main(int argc, char**argv)
{
	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	else
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
