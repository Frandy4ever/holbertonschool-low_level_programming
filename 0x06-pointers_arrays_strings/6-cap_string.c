/*
 * File: 6-cap_string.c
 * Auth: Frandy Slueue @holbertonschool
 */

#include "holberton.h"

/**
 * cap_string - Capitalizes all words of a string
 * @str: The string to be capitalized
 *
 * Return: A pointer to the change string
 */

char *cap_string(char *str)
{
	int f = 0;

	while (str[f])
	{
		while (!(str[f] >= 'a' && str[f] <= 'z'))
			f++;

		if (str[f - 1] == ' ' ||
			str[f - 1] == '\t' ||
			str[f - 1] == '\n' ||
			str[f - 1] == ',' ||
			str[f - 1] == ';' ||
			str[f - 1] == '.' ||
			str[f - 1] == '!' ||
			str[f - 1] == '?' ||
			str[f - 1] == '"' ||
			str[f - 1] == '(' ||
			str[f - 1] == ')' ||
			str[f - 1] == '{' ||
			str[f - 1] == '}' ||
			f == 0)
			str[f] -= 32;

		f++;
	}
	return (str);
}
