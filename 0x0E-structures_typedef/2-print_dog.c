/*
 * File: 2-print_dog.c
 * Auth: Frandy Slueue @holbertonschool
 */

#include "dog.h"
#include <stdio.h>

void print_dog(struct dog *d)
{

if (d == NULL)
	return;

if (d->name == NULL)
	printf("Name: (nil)\n");
else
	printf("%s\n", d->name);

if (d->age != d->age)
	printf("Name: (nil)\n");
else
	printf("%f\n", d->age);

if (d->owner == NULL)
	printf("Name: (nil)\n");
else
	printf("%s\n", d->owner);

}
