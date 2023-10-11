#include "function_pointers.h"
/**
 *print_name - prints name
 *@name - string
 *@f: function pointer
 *@name: string
 *Return: void
 */
void print_name(char *name, void (*f)(char *name))
{
	if (f != NULL)
		f(name);
	else
		return;
}
