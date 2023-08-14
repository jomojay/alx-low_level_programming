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
	if (d == NULL)
	{
		return;
	}
	else
	{
		if (d->name == NULL)
			printf("Name: (nil)");
		else
			printf("Name: %s\n", d->
name);
		if (d->age == NULL)
			printf("Age: (nil)");
		else
			printf("Name: %f\n", d->age);
		if (d->owner == NULL)
			printf("Owner: (nil)");
		else
			printf("Name: %s\n", d->
owner);
	}
}
