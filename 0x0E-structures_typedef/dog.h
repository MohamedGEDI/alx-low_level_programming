#ifndef DOG_H
#define DOG_H
/**
 * struct dog - struct dog
 * @name: member
 * @age: member
 * @owner: Memebr
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};


void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
