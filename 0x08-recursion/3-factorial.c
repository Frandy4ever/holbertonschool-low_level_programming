/**
 * File: 3-factorial.c
 * Auth: Frandy Slueue @holbertonschool
 */

#include <stdio.h>

/**
 * factorial - Returns the factorial of a given number
 * @n: The number to find the factorial of
 *
 * Return: if n > 0 - the factorial of n
 *		if n < 0, return 1
 */

int factorial(int n)
{

int result = n;

	if (n < 0)
		return (-1);

	else if (n >= 0 && n <= 1)
		return (1);

	result *= factorial(n - 1);
	return (result);
}
