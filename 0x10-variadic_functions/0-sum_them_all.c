/*
 * File: 0-sum_them_all.c
 * Auth: Frandy Slueue @holbertonschool
 */

#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: parameter to return
 *
 * Return: 0
 */

int sum_them_all(const unsigned int n, ...)
{

	va_list nums;
	unsigned int omega, sum = 0;

	va_start(nums, n);

	for (omega = 0; omega < n; omega++)
		sum += va_arg(nums, int);

	va_end(nums);

	return (sum);
}
