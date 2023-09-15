#include "main.h"
/**
 *main - entry point
 *Return: 0 if success
 *
 */
int main(void)
{
	int a;
	int b = 6;

	for (a = 3; a < b; a++)
	{
		if (a % 2 == 0)
		{
			printf("%d \n", a);
		}
	}

	return (0);
}
