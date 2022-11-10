/*
 * File: 4-clear_bit.c
 * Auth: Frandy Slueue @holbertonschool
 */

#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @n: Pointer to a number
 * @index: To set bit to 0
 *
 * Return: 1 (Success) else -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);

	if ((*n >> index) & 1)
	{
		*n -= 1 << index;
		return (1);
	}
	return (1);
}
