/*
 * File: 5-string_toupper.c
 * Auth: Frandy Slueue @holbertonschool
 */

#include "holberton.h"

/**
 * string_toupper - Changes all lowercase letters
 *	of a sting to uppercase
 *@str: The string to be modified
 *
 * Return: Pointer to changed string
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}

	return (str);
}
