#include "main.h"
/**
 *main - entry point
 *
 *Return: 0 when success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	return (n);
}
