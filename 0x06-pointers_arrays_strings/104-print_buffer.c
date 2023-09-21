#include "main.h"
/**
 *print_buffer - print a buffer
 *@b: buffer pointer
 *@size: number
 *Return: 0 if success
 */
void print_buffer(char *b, int size)
{
	int i;
	char *p;

	for (i = 0; b[i] != '\0'; i++)
	{
		p = &b[0];
	}
	printf("%p", p);
	printf("%d", size);
}
