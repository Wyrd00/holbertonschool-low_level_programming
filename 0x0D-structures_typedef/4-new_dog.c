#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * new_dog - creates new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: new dog struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dawg;

	if (dawg == NULL)
		return (NULL);
	dawg->name = name;
	dawg->age = age;
	dawg->owner = owner;
	return (dawg);
}
