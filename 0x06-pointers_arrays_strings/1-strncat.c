/*
 * File: 1-strncat.c
 * Auth: Frandy Slueue @holbertonschool
 */

#include "holberton.h"

/**
 * _strncat - Concatenates two strings with the use of
 *	of inputted number of bytes from src.
 *@dest: String to be appended upon
 *@src: Sting to append to dest
 *@n: Number of bytes from src to be appended to dest
 *
 * Return: A pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, dest_len = 0;

	while (dest[i++])
		dest_len++;

	for (i = 0; src[i] && i < n; i++)
		dest[dest_len++] = src[i];

	return (dest);

}
