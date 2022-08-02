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
	void init_dog(my_dog *d, char *name, float age, char *owner);
	void print_dog(my_dog *d);
	my_dog *poppy(char *name, float age, char *owner);

#endif
