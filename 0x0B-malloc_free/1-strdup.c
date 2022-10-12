/*
 * File: 1-strdup.c
 * Auth: Frandy Slueue @holbertonschool
 */
#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in a memory
 *	containing a copy of the string given as parameter
 *@str: The string to be copied
 *
 * Return: NULL	if str == NULL or insufficient memory is available
 *	otherwise, return a pointer to the duplicated string
 */

char *_strdup(char *str)

{
	char *a;
	int i, c;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	a = malloc(i * sizeof(*a) + 1);
	if (a == NULL)
		return (NULL);

	for (c = 0; c < i; c++)
		a[c] = str[c];
	a[c] = '\0';

	return (a);
}
