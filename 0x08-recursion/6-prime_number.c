/*
 * File: 6-is_prime_number.c
 * Auth: Frandy Slueue @holbertonschool
 */

#include "main.h"

/**
 * isDivisible - checks if n is divisible
 * @num: number to be checked
 * @div: divisor
 *
 * Return: 0 or 1
 */

int isDivisible(int num, int div)
{

	if (num % div == 0)
		return (0);

	if (div == num / 2)
		return (1);

	return (isDivisible(num, div + 1));
}

/**
 * is_prime_number - return 1 if the input
 *	integer is a prime number otherwise 0 is return
 *@n: inputted integer
 *
 * Return: Prime number or -1
 */

int is_prime_number(int n)
{
	int div = 2;

	if (n < 1)
		return (0);

if (n >= 2 && n <= 3)
	return (1);

return (isDivisible(n, div));
}
