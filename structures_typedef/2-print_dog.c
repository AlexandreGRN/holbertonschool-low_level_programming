#include <stdlib.h>
#include "dog.h"
#include <stdio.h>

/**
 * print_dog - function that print dog infos
 * @d: dog struct
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		exit(5);
	if ((*d).name == NULL)
		printf("(nil)");
	else
		printf("Name: %s\n", d->name);
	if ((*d).age == -1)
		printf("(nil)");
	else
		printf("Age: %f\n", d->age);
	if ((*d).owner == NULL)
		printf("(nil)");
	else
		printf("Owner: %s\n", d->owner);
}
