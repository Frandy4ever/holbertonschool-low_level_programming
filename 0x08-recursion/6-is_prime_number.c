/*
 * File: 6-is_prime_number.c
 * Auth: Frandy Slueue @holbertonschool
 */

#include "main.h"

/**
 * primeChecker - checks to see if n number is prime
 * @f: factor checker
 * @p: possible prime number
 *
 * Return: 1 if prime, 0 if not
 */

int primeChecker(int f, int p)
{

	if (p < 2 || p % f == 0)
		return (0);

	else if (f > p / 2)
		return (1);

	else
		return (primeChecker(f + 1, p));
}

/**
 *is_prime_number - states if number is prime
 @n: number to check
 *
 * Return: 1 if prime, 0 if not
 */

int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (primeChecker(2, n));
}
