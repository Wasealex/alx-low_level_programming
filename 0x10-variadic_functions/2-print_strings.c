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

	if (separator == NULL)
		return;
	va_start(args, n);
	printf("%s", va_arg(args, char *));
	for (i = 1; i < n; i++)
	{
		printf("%s", separator);
		printf("%s", va_arg(args, char *));
		if (va_arg(args, char *) == NULL)
		{
			printf("(nil)");
		}

	}
	printf("\n");
	va_end(args);
}
