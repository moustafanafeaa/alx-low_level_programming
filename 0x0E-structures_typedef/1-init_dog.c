#include "dog.h"
/**
 * init_dog - initialize a variable of type struct dog
 * @d: struct of dog
 * @name: name
 * @age: age of dog
 * @owner: owner name
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
