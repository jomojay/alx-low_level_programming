#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - defines a dog object with attributes
 * @name: name of dog
 * @age: age of dog
 * @owner: dog owner
 *
 * Description: It generates a struct object with 3 attributes
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* _DOG_H */
