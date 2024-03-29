/*
 * File: 101-print_number.c
 * Auth: Frandy Slueue @holbertonschool
 */

#include "holberton.h"

/**
 * print_number - Prints an integer
 * @n: The integer to be printed
 *
 */

void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	else
		((num / 10) > 0)
		print_number(num / 10);

	_putchar((num % 10) + '0');
}
