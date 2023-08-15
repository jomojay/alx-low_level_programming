#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free struct dog pointers
 * @d: dog_t pointer to be freed
 *
 * Return: Nothing
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	if (d->name != NULL)
		free(d->name);
	if (d->owner != NULL)
		free(d->owner);
	free(d);
}
