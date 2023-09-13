#include "main.h"
#include <stdio.h>
/**
 *print_to_98 - prints number from given n number to 98
 *@n: number to be started from
 *
 *Return: return numbers untill 98
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (n = n; n <= 97; n++)
		{
			printf("%i, ", n);
		}
		printf("%d\n", 98);
	}
	else
	{
		for (n = n; n >= 99; n--)
		{
			printf("%i, ", n);
		}
		printf("%d\n", 98);
	}
}
