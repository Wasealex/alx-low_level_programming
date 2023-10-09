#include "dog.h"
/**
 *new_dog - creates new dog
 *@name: dog's name
 *@age: dog's age
 *@owner: dog owner's name
 *Return: returns pointer otherwise NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);
	new->name = malloc(strlen(name) + 1);
	if (new->name == NULL)
	{
		free(new->name);
		free(new);
		return (NULL);
	}
	strcpy(new->name, name);
	new->age = age;
	new->owner = malloc(strlen(owner) + 1);
	if (new->owner == NULL)
	{
		free(new->name);
		free(new->owner);
		free(new);
		return (NULL);
	}
	strcpy(new->owner, owner);

	return (new);
}
