#include "dog.h"
#include <stdlib.h>
/**
 * len - gets length of str
 * @s: string
 * Return: numer of length
 */
int len(const char *s)
{
	int len = 0;

	while (*s++)
		len++;
	return (len);
}
/**
 * copy - copy str to another ptr
 * @s: str will copy
 * @d: destination
 * Return: des
 */
char *copy(char *d, char *s)
{
	int x;

	for (x = 0; s[x]; x++)
		d[x] = s[x];
	d[x] = '\0';

	return (d);
}

/**
 * new_dog -  that creates a new dog.
 * @name: name of dog
 * @age: age of dog
 * @owner: owner name
 * Return: struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	if (!name || age < 0 || !owner)
		return (0);

	d = ((dog_t *) malloc(sizeof(dog_t)));
	if (d == 0)
		return (0);

	d->name = malloc(sizeof(char) * (len(name) + 1));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	d->owner = malloc(sizeof(char) * (len(owner) + 1));
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (0);
	}
	d->name = copy(d->name, name);
	d->age = age;
	d->owner = copy(d->owner, owner);
	return (d);
}
