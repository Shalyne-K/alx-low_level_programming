#include "dog.h"
#include <stdio.h>

/**
 * init_dog - a function that initialize a variable of type struct dog.
 * @d: pointer to a struct dog.
 * @name: pointer to a string -- name of the dog.
 * @age: float -- age of the dog.
 * @owner: pointer to a string -- owner of the dog.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
