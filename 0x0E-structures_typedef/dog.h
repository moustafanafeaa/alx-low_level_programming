#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog struct
 * @name: string of name
 * @age: age of dog
 * @owner: name of owner
 *
 * desc: dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif