/*
 * File: 0-binary_to_uint.c
 * Auth: Frandy Slueue @holbertonschool
 */

#include "main.h"

/**
 * binary_to_unit - Converts a binary number to an unsigned int
 * @b: Pointer to string of 0 and 1 chars
 *
 * Return: 0 or converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num, i;

	if (!b || !*b)
		return (NULL);

	num = i = 0;

	while (b[i])
	{
		if (b[i] > 49)
			return (0);

		else if (b[i] == 49)
		{
			num <<= 1;
			num += 1;
		}
		else
			num <<= 1;
		i++;
	}
	return (num);
}
