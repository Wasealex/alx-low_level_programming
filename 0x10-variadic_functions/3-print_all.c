#include "variadic_functions.h"
/**
 *print_all - prints all types using format
 *@format: type of formats
 *Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char c;
	int i;
	float f;
	char *s;
	const char *ptr = format;

	va_start(args, format);
	if (format)
	{
		while (*ptr)
		{
			switch (*ptr)
			{
			case 'c':
				c = (char)va_arg(args, int);
				printf("%c", c);
				break;
			case 'i':
				i = (int)va_arg(args, int);
				printf("%d", i);
				break;
			case 'f':
				f = (double)va_arg(args, double);
				printf("%f", f);
				break;
			case 's':
				s = va_arg(args, char *);
				printf("%s", s);
				break;
			}
			ptr++;
		}
	}
	if (*ptr && (*ptr == 'c' || *ptr == 'i' || *ptr == 'f' || *ptr == 's'))
	{
		printf(", ");
	}
	printf("\n");
	va_end(args);
}
