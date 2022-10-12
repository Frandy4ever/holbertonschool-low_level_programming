/*
 * File: 3-factorial.c
 * Auth: Frandy Slueue @holbertonschool
 */

#include "main.h"

/**
 * factorial - factorial of n number
 * @n: number to be factored
 *
 * Return: 0 or -1
 */

int factorial(int n)
{
	int result = n;

	if (n < 0)
		return (-1);

	else if (n >= 0 && n <= 1)
		return (1);

	result *= factorial(n - 1);
factorial(result);
}
