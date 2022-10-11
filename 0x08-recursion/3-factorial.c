/**
 * File: 3-factorial.c
 * Auth: Frandy Slueue @holbertonschool
 */

#include <stdio.h>

/**
 * factorial - Returns the factorial of a given number
 * @n: The number to be factored
 *
 * Return: The factor of n if n > 0
 *		or return -1 if n < 0
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
