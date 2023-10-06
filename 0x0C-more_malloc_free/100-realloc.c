#include "main.h"
/**
 *_realloc - reallocate memory using malloc and free
 *@ptr: initially allocated memory using old_size
 *@old_size: originally assigned memory size
 *@new_size: reallocated size
 *Return: pointer to typecasted
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr1;

	ptr = malloc(old_size);
	ptr1 = malloc(new_size);
	if (ptr == NULL || ptr1 == NULL)
		return (NULL);

	ptr1 = ptr;

	if (new_size > old_size)
	{
		free(ptr);
		return (ptr1);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		return (ptr1);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (ptr1);
	}
	return (ptr1);
}
