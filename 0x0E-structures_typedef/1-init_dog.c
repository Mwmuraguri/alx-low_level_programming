#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 *
 * @d: pointer
 * @age: age
 * @name: name
 * @owner: owner
 *
 * return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->age = age;
	d->name = name;
	d->owner = owner;
}
