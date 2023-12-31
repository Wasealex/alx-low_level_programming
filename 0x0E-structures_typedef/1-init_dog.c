#include "dog.h"
/**
 *init_dog - initialize struct dog
 *@d: member name
 *@name: name of the dog
 *@age: age of the dog
 *@owner: name of the owner of the dog
 *Return: void means 0 if success
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
