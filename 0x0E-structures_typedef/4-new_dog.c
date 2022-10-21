/*
 * File: 4-new_dog.c
 * Auth: Frandy Slueue @holbertonschool
 */

#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's a
 * @owner: dog's owner
 *
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{

unsigned int bone, flea, paw;
dog_t *dog;
if (name == NULL || owner == NULL)
	return (NULL);
dog = malloc(sizeof(dog_t));
if (dog == NULL)
	return (NULL);
for (bone = 0; name[bone]; bone++)
	;
bone++;
dog->name = malloc((bone + 1) * sizeof(char));
if (dog->name == NULL)
{
	free(dog);
	return (NULL);
}
for (paw = 0; paw < bone; paw++)
dog->name[paw] = name[paw];
dog->age = age;

for (flea = 0; owner[flea]; flea++)
;
flea++;
dog->owner = malloc((flea + 1) * sizeof(char));
if (dog->owner == NULL)
{
	free(dog->name);
	free(dog);
	return (NULL);
}
for (paw = 0; paw < bone; paw++)
dog->owner[paw] = owner[paw];
return (dog);
}
