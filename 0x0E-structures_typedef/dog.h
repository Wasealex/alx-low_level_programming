#ifndef _dog_h_
#define _dog_h_
/*structure */
/**
 *struct dog - defines information of dog with dog owner
 *@name: name of the dog
 *@age: age of the dog
 *@owner: name of dog owner
 *Description - this is a list of information on dog name and age
 *in addition it will take dog owner name.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/*prototype*/
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /*_dog_h_*/
