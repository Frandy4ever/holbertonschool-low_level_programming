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
	char *duplicate;
	int index, len = 0;

	if (str == NULL)
		return (NULL);
for (index = 0; str[index]; index++)
		;

			duplicate = malloc(len * sizeof(*duplicate) + 1);

			if (duplicate == NULL)
			return (NULL);

			for (index = 0; str[index]; index++)
			duplicate[index] = str[index];

			duplicate[len] = '\0';

			return (duplicate);
}
