/*
 * File: 5-flip_bits.c
 * Auth: Frandy Slueue @holbertonschoool
 */

#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would need to flip
 *		to get from one number to another
 * @n: starting point
 * @m: Target
 *
 * Return: number bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bits = 0;
	unsgined long int xor;

	xor = n ^ m;

	while (xor)
	{
		bits += xor & 1;
		xor >>= 1;
	}
	return (bits);
}
