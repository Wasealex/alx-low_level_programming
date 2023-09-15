#include "main.h"
/**
 *main - entry point
 *Return: 0 if success
 *
 */
int main(void)
{
	int a;
	long b = 612852475143;

	for (a = 0; a < b; a++)
	{
		if (b % a == 0)
		{
			printf("%d\n", a);
		}
	}

	return (0);
}
