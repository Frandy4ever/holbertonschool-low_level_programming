/*
 * File: 2-int_index.c
 * Auth: Frandy Slueue @holbertonschool
 */

#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - Searches for an
 *	integer in an array of integer
 * @array: the array of integers
 * @size: the size of the array
 * @cmp: a pointer to the function to be
 *	used to compare value
 *
 * Return: index of first element of -1
 */

int int_index(int *array, int size, int (*cmp)(int))

{
	int i, r;
if (size > 0 && array && cmp)
{
for (i = 0; i < size; i++)
{
r = cmp(array[i]);
if (r)
break;
}
if (i < size)
return (i);
}
return (-1);
}
