#include "variadic_functions.h"
/**
 *print_numbers - prints numbers with separators
 *@separator: a string to be printed bn numbers
 *@n: number of args
 *Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	if (separator == NULL)
	{
		return;
	}
	va_start(args, n);
	printf("%d", va_arg(args, int));

	for (i = 1; i < n; i++)
	{
		printf("%s", separator);
		printf("%d", va_arg(args, int));
	}
	printf("\n");
	va_end(args);
}
