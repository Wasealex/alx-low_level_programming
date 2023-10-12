#include "variadic_functions.h"
/**
 *print_strings - prints strings
 *@separator: a strig for separator
 *@n: number of arguments
 *Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	printf("%s", va_arg(args, char *));
	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
			printf("%s", separator);
		printf("%s", va_arg(args, char *));
	}
	printf("\n");
	va_end(args);
}
