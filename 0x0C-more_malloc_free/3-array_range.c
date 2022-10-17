/*
 * File: 3-array_range.c
 * Auth: Frandy Slueue @holbertonschool
 */

#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: first integer number
 * @max: last int number
 *
 * Return: pointer to newly allocated memory or NULL if fails
 */

int *array_range(int min, int max)
{

	int i, f;
	int *h;

		if (min > max)
			return (NULL);

	f = max - min + 1;
	h = malloc(sizeof(int) * f);

	if (h == NULL)
		return (NULL);

	for (i = 0; i < f; i++, min++)
	{
		h[i] = min;
	}

	return (h);

}
