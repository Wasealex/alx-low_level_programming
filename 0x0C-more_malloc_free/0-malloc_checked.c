#include "main.h"
/**
 *malloc_checked - function that allocates memory using malloc
 *@b: size
 *return: void pointer
 */
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(sizeof(s) * b);

	if (s == NULL)
		return (NULL);
	else
		return (s);
}
