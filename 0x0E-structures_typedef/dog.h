#ifndef DOG_H
#define DOG_H

struct dog
{
	char *name;
	float age;
	char *owner;
};
	typedef struct dog my_dog;

	int _putchar(char);

	my_dog dog(char *name, float age, char *owner);

#endif
