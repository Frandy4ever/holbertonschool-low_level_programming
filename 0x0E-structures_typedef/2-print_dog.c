/*
 * File: 2-print_dog.c
 * Auth: Frandy Slueue @holbertonschool
 */

#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - prints struct dog elements values
 * @d: struct name
 *
 */

void print_dog(struct dog *d)
{

if (d == NULL)
	return;

if (d->name == NULL)
	printf("Name: (nil)\n");
else
	printf("Name: %s\n", d->name);

if (d->age != d->age)
	printf("Age: (nil)\n");
else
	printf("Age: %f\n", d->age);

if (d->owner == NULL)
	printf("Owner: (nil)\n");
else
	printf("Owner: %s\n", d->owner);

}
