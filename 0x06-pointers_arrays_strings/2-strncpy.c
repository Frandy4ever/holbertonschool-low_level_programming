/*
 * File: 2-strncpy.c
 * Auth: Frandy Slueue @holbertonschool
 */

#include "holberton.h"

/**
 * _strncpy - Copies a string
 * @dest: Buffer storing the string copied
 * @src: The source string
 * @n: The max number of bytes to copy from src
 *
 * Return: Result of string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, src_len = 0;

	while (src[i++])
		src_len++;

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];

	for (i = src_len; i < n; i++)
		dest[i] = '\0';

	return (dest);

}
