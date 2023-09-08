#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: always 0
 */
int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar (i);
		if (i == 57)
			break;
		putchar (',');
		putchar (' ');
		i++;
	}
	putchar('\n');
	return (0);
}
