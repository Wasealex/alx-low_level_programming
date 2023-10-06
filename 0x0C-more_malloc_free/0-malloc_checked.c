#include "main.h"
/**
 *malloc_checked - function that allocates memory using malloc
 *@b: size
 *return: void pointer
 */
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);

	if (s == NULL)
		exit (98);
	else
		return (s);
}
