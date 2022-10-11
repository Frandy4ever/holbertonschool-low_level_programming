/*
 * File: 6-is_prime_number.c
 * Auth: Frandy Slueue @holbertonschool
 */

#include "main.h"
int is_prime_number(int n);
int isDivisible(int num, int div);

/**
 * isDivisible - Checks if a number is divisible
 * @num: The number to be checked
 * @div: Divisor
 *
 * Return: If the number is divisible - 0
 *		if the number is not divisible
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
 * is_prime_number - Returns 1 if the input
 *		integer is a prime number otherwise 0 is returned
 * @n: inputted integer
 *
 * Returns: Prime number or -1
 */

int is_prime_number(int n)
{

	int div = 2;

	if (n <= 1)
		return (0);

	if (n >= 2 && n <= 3)
		return (1);

	return (isDivisible(n, div));

}
