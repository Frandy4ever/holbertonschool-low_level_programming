/*
 * File: 1-init_dog.c
 * Auth: Frandy Slueue @holbertonschool
 */

#include "dog.h"
#include <stdio.h>
/**
 * init_dog - initializes structure with set values
 * @d: name assigned to struct dog
 * @name: dog's name
 * @owner: owner's name
 * @age: dog's age
 */


void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d != NULL)
	{
	d->name = name;
	d->owner = owner;
	d->age = age;
	}
}
