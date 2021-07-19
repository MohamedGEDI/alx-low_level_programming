#include <stdio.h>
#include "dog.h"
/**
 *init_dog - initialize struct dog
 *@d: struct name
 *@name: member
 *@age: member
 *@owner: member
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
