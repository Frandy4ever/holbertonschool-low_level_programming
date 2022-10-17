/*
 * File: 0-malloc_checked.c
 * Auth: Frandy Slueue @holbertonschool
 */

#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: memory to allocate
 *
 * Return: pointer to allocated memory or normal process
 *		terminate if error.
 */

void *malloc_checked(unsigned int b)
{

	void *p;

	p = malloc(b);

	if (p == NULL)

		exit(98);

	return (p);

}
