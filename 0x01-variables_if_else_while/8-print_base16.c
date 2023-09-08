#include <stdio.h>
/**
 *main - Entry point
 *Return: always 0
 */
int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		i++;
	}
	i = 97;
	while (i < 103)
	{
		putchar(i);
		i++;
	}
	putchar('\n');

	return (0);

}
