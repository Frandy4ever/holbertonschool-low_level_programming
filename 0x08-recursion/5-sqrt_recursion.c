/*
 * File: 5-sqrt_recursion.c
 * Auth: Frandy Slueue @holbertonschool
 */

#include "main.h"
int _squt_recursion(int n);
int findSquareRoot(int num, int root);

/**
 * findSquareRoot - Finds the natural square rooot of an inputted number.
 * @num: The number to find the square root of
 * @root: The root to be tested
 *
 * Return: Natural square root of a number or -1 if none
 */

int findSquareRoot(int num, int root)
{
	if ((root * root) == num)
		return (root);

	if (root == num / 2)
		return (-1);

	return (findSquareRoot(num, root + 1));
}



/**
 * _sqrt_recursion - Returns the natural square root
 * 		of a number
 * @n: number whose natural square
 * 		root is to be returned
 *
 * Return: Natural square root of a number or -1 if none
 */

int _sqrt_recursion(int n)

{

	int root = 0;
	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (findSquareRoot(n, root));
}
