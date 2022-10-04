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
	int frandy = 0;

	while (str[frandy])
	{
		while (!(str[frandy] >= 'a' && str[frandy] <= 'z'))
			frandy++;

		if (str[frandy - 1] == ' ' ||
				str[frandy - 1] == '\t' ||
				str[frandy - 1] == '\n' ||
				str[frandy - 1] == ',' ||
				str[frandy - 1] == ';' ||
				str[frandy - 1] == '.' ||
				str[frandy - 1] == '!' ||
				str[frandy - 1] == '?' ||
				str[frandy - 1] == '"' ||
				str[frandy - 1] == '(' ||
				str[frandy - 1] == ')' ||
				str[frandy - 1] == '{' ||
				str[frandy - 1] == '}' ||
				frandy == 0)
			str[frandy] -= 32;

		frandy++;
	}
	return (str);
}
