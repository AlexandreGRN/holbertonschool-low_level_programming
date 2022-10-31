#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize dog struct
 * @d: structure pointer
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner name of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}