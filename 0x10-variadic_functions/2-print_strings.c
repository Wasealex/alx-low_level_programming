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
	const char *str;
	va_list args;

	if (separator == NULL)
		return;
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");
		if (i != n - 1)
		{
		printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
