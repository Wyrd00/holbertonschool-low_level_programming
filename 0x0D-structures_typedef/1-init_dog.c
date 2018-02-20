#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - intitialize variable of type struct dog
 * @d: pointer to dog
 * @name: pointer to name
 * @age: float to age
 * @owner: pointer to owner
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
