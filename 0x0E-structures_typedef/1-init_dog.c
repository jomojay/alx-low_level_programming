#include "dog.h"

/**
 * init_dog - initializes a struct dog variable
 * @d: pointer to struct dog to be initialized
 * @name: pointer to name
 * @age: age
 * @owner: pointer to owner
 *
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{	d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
