#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - prints all the element of a struct dog
 * @d: pointer to the dog struct to be printed
 *
 * Return: Nothing
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)");
		if (d->age)
			printf("Age: %f\n", d->age);
		else
			printf("Name: (nil)");
		if (d->owner != NULL)
			printf("Owner: %s\n", d->owner);	else
			printf("Name: (nil)");
	}
}
