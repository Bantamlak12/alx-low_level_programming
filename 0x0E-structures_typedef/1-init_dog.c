#include "dog.h"

/**
 * init_dog - a function that initialize a variable of type struct dog
 * @d: a pointer to struct dog that contains address of the variable
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
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
