/*
 * File: 1-array_iterator.c
 * Auth: Frandy Slueue @holbertonschool
 */

#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *array_iterator - Executes a function given as a
 *	parameter on each element of an array
 *@array: The array
 *@size: Size of array
 *@action: pointer to the function to be executed
 */
void array_iterator(int *array, size_t size, void (*action)(int))

{
	size_t i;
if (array && action)
{
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
}
