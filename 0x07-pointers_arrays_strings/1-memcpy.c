/*
 * File: 1-memcpy.c
 * Auth: Frandy Slueue @holbertonschool
 */

#include "holberton.h"

/**
 * _memcpy - Copies @n bytes from the memory area pointed
 *	to be @src into that pointed to be @dest.
 *@dest: A pointer to the memory area to copy @src into
 *@src: The source buffer to copy characters from
 *@n: The number of bytes to copy from @src
 */

void *_memcpy(void *dest, const void *src, size_t n)

{
	unsigned int i;
	unsigned char *destination = dest;
	const unsigned char *source = src;

	for (i = 0; i < n; i++)
		destination[i] = source[i];

	return (dest);

}
