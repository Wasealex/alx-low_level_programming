#include "dog.h"
/**
 *free_dog - frees dog
 *@d: pointer to struct
 *
 *Return: void
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
