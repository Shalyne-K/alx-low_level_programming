#ifndef DOG_H
#define DOG_H

/**
 * dog_t - Typedef for struct dog
 *
 */

typedef struct dog dog_t;

/**
 * struct dog - structure that stores some information about a dog.
 * @name:  string -- name of the dog.
 * @age: float -- age of the dog.
 * @owner: string -- owner of the dog.
 *
 * Description: structure called "dog" that stores name, age
 * and the name of owner.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
