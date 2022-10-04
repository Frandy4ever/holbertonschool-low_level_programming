/*
 * File: 7-leet.c
 * Auth: Frandy Slueue @holbertonschool
 */

#include "holberton.h"

/**
 * leet - Encodes a string to 1337
 * @str: The string to be encoded
 *
 * Return: A point to the encoded string
 */

char *leet(char *str)
{
	int i = 0, j;

	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[i])
	{
		for (j = 0; j <= 7; j++)
		{
			if (str[i] == leet[j] || str[i] - 32 == leet[j])
				str[i] = j + '0';
		}
		i++;
	}
	return (str);
}
