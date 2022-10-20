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
	printf("(nil)\n");
else
	printf("%s\n", d->name);

if (d->owner == NULL)
	printf("(nil)\n");
else
	printf("%s\n", d->owner);

if (d->age != d->age)
	printf("(nil)\n");
else
	printf("%f\n", d->age);
}
