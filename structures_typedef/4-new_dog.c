#include "dog.h"
#include <string.h>
/**
 * new_dog - function that create a new dog
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: owner of the new dog
 * Return: dog_t type pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1 = 0, len2 = 0;

	len1 = strlen(name) + 1;
	len2 = strlen(owner) + 1;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		dog = 0;
		free(dog);
		return (NULL);
	}

	dog->name = malloc((sizeof(char) * len1));
	if (dog->name == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->name = name;

	dog->owner = malloc((sizeof(char) * len2));
	if (dog->owner == NULL)
	{
		free(dog->owner);
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->age = age;
	dog->owner = owner;

	return (dog);
}
