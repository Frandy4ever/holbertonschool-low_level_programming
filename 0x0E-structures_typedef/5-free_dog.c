/*
 * File: 5-free_dog.c
 * Auth: Frandy Slueue @holbertonschool
 */

#include <stdlib.h>
#include "dog.h"
#include <stdio.h>

/**
 * free_dog - frees dog
 * @dog_t:
 * @d:
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
