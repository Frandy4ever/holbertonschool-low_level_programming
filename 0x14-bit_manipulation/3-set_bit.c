/*
 * File: 3-set_bit.c
 * Auth: Frandy Slueue @holbertonschool
 */

#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @n: Pointer to a number
 * @index: Number to set
 *
 * Return: 1 (Success) else -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);

	if (!((*n >> index) & 1))
	{
		*n += << index;
		return (1);
	}
	return (-1);
}
