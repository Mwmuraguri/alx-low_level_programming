#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints a struck dog
 *
 * @d: pointer
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Age: %f\n", d->age);
	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
