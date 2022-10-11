#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog -  a function that creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: a pointer to the new struct dog
 *		   NULL if the function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *poppy;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	poppy = malloc(sizeof(dog_t));

	if (poppy == NULL)
		return (NULL);

	poppy->name = malloc(sizeof(char) * strlen(name) + 1);
	if (poppy->name == NULL)
	{
		free(poppy->name);
		return (NULL);
	}

	poppy->owner = malloc(sizeof(char) * strlen(owner) + 1);
	if (poppy->owner == NULL)
	{
		free(poppy->owner);
		free(poppy);
		return (NULL);
	}

	poppy->name = strcpy(poppy->name, name);
	poppy->age = age;
	poppy->owner = strcpy(poppy->owner, owner);

	return (poppy);
}
