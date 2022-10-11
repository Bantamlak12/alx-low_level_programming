#include "dog.h"
#include <stdlib.h>

int _strlen(char *str);
char *_strcpy(char *dest, char *src);

/**
 * _strlen - a function that finds length of string
 * @str: a string  to be find for length
 * Return: its length
 */

int _strlen(char *str)
{
	int i, len = 0;

	for (i = 0; str[i]; i++)
		len++;
	return (len);
}

/**
 * _strcpy - a function that copy a source to destination
 * @dest: a dest string that is going to contain a copy of source string
 * @src: a source string to be copied
 * Return: a dest that has a copy of source
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog -  a function that creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: a pointer to the a struct dog
 *		   NULL if the function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *poppy;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	poppy = malloc(sizeof(dog_t));
	if (poppy == NULL)
	{
		free(poppy);
		return (NULL);
	}
	poppy->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (poppy->name == NULL)
	{
		free(poppy->name);
		return (NULL);
	}
	poppy->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (poppy->owner == NULL)
	{
		free(poppy->owner);
		free(poppy);
		return (NULL);
	}
	poppy->name = _strcpy(poppy->name, name);
	poppy->age = age;
	poppy->owner = _strcpy(poppy->owner, owner);

	return (poppy);
}
