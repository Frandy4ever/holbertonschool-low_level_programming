/*
 * File: 1-array_iterator.c
 * Auth: Frandy Slueue @holbertonschool
 */

#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

void array_iterator(int *array, size_t size, void (*action)(int));
{
	size_t i;
if (array && action)
{
for (i = 0; i < size; i++)
{
action(array[i];
}
}
}
