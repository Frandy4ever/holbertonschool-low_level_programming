/*
 * File: 1-init_dog.c
 * Auth: Frandy Slueue @holbertonschool
 */

#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes structure with set values
 * @d: name assigned to struct dog
 * @name: dog's name
 * @owner: owner's name
 * @age: dog's age
 */


void init_dog(struct dog *d, char *name, float age, char *owner)
{


	d->name = name;
	d->owner = owner;
	d->age = age;
}
