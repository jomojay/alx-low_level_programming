#include "dog.h"
#include <stdlib.h>

/**
 * _strcpy - copys a string  
 * @str: pointer to the string to be copied 
 * Return: Always 0
 */
char *_strcpy(char *str)
{
	char *ptr;
	int i;
	int len = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len] != '\0')
	{
		len++;
	}
	ptr = malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		ptr[i] = str[i];
	}
	ptr[i] = '\0';
	return (ptr);
}

/**
 * new_dog - Funcion to create a new dog
 * @name: initial name of dog
 * @age: initial dog age
 * @owner: initial dog owner
 * Return: Return a pointer to the new_dog 
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	char *dog_name, *dog_owner;
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}
	dog_name = _strcpy(name);
	if (dog_name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->name = dog_name;

	dog->age = age;

	dog_owner = _strcpy(owner);
	if (dog_owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->owner = dog_owner;
	return (dog);
}
