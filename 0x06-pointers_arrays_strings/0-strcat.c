/*
 * File: 0-strcat.c
 * Auth: Frandy Slueue @holbertonschool
 */

 #include "holberton.h"

/**
 * _strcat - Concatenate two strings. Append the src string
 *	to the dest string.
 * @dest: Destination pointer to be concatenated upon
 * @src: Source string that will append to @dest
 *
 * Return: A pointer to the destination string @dests
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, dest_len = 0;

	while (dest[i++])
		dest_len++;

	for (i = 0; src[i]; i++)
		dest[dest_len++] = src[i];

	return (dest);

}
