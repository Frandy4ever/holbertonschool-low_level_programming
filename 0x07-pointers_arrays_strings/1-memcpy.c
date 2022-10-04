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
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
	*(dest + i) = *(src + i);
}

return (dest);

}
