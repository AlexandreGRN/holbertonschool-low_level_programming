#ifndef DOG_H
#define DOG_H
/**
 * struct dog - infos about dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: name, age and owner name of a dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

/*prototype function*/
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/*dog_t *new_dog(char *name, float age, char *owner);*/
/*void free_dog(dog_t *d);*/

#endif
