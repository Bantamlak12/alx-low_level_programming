#ifndef DOG_H
#define DOG_H

struct dog
{
	char *name;
	float age;
	char *owner;
};
	typedef struct dog my_dog;

	my_dog *poppy(char *name, float age, char *owner);

#endif
