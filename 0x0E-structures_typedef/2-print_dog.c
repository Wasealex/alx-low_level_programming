#include "dog.h"
/**
 *print_dog - prints struct dog
 *@d: pointer to struct dog
 *Return: 0 if success
 *null if not
 */
void print_dog(struct dog *d)
{
	char *s = "(nil)";

	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = s;
	if (d->age == 0)
		d->age = 0;
	if (d->owner == NULL)
		d->owner = s;
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
