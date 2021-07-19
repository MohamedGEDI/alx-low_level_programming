#include <stdio.h>
#include "dog.h"
/**
 *print_dog - initialize struct dog
 *@d: struct name
 *@name: member
 *@age: member
 *@owner: member
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	(d->name == NULL) ? printf("Name: (nil)\n") : printf("Name: %s\n", d->name);
	printf("Age: %0.6f\n", d->age);

	(d->owner == NULL) ? printf("Owner: (nil)\n") : printf("Owner: %s\n", d->owner);
}
