#ifndef DOG_H
#define DOG_H

/**
 * struct dog - contains information about the dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
	typedef struct dog my_dog;

	void init_dog(struct dog *d, char *name, float age, char *owner);

	void print_dog(struct dog *d);

	my_dog *poppy(char *name, float age, char *owner);

#endif
