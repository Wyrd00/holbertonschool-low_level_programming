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
	int len_n, len_o;

	dawg = malloc(sizeof(struct dog));
	if (dawg == NULL)
		return (NULL);
	for (len_n = 0; name[len_n] != '\0'; len_n++)
		;
	dawg->name = malloc(len_n + 1);
	if (dawg->name == NULL)
		return (NULL);
	for (len_n = 0; name[len_n] != '\0'; len_n++)
		dawg->name[len_n] = name[len_n];
	dawg->age = age;
	for (len_o = 0; owner[len_o] != '\0'; len_o++)
		;
	dawg->owner = malloc(len_o + 1);
	if (dawg->owner == NULL)
		return (NULL);
	for (len_o = 0; owner[len_o] != '\0'; len_o++)
		dawg->owner[len_o] = owner[len_o];
	return (dawg);
}
