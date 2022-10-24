/*
 * File: 3-op_functions.c
 * Auth: Frandy Slueue @holbertonschool
 */

#include "3-calc.h"


/**
 * op_add - provides the sum of two numbers
 * @a: the 1st numbet
 * @b: the 2nd number
 *
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - difference of two numbers
 * @a: 1st number
 * @b: 2nd number
 *
 * Return: the diffence of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - product of two numbers
 * @a: 1st number
 * @b: 2nd number
 *
 * Return: The product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - quotient of two numbers
 * @a: 1st number
 * @b: 2nd number
 *
 * Return: The quotient of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - the modulo of two numbers
 * @a: 1st number
 * @b: 2nd number
 *
 * Return: the modulo of a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
