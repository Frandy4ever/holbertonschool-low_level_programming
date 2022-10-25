/*
 * File: 1-print_numbers.c
 * Auth: Frandy Slueue @holbertonschool
 */

#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed be new line
 * @separator: String printed between numbers
 * @n: n number passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{

	va_list nums;
	unsigned int omega;

	va_start(nums, n);

	for (omega = 0; omega < n; omega++)
	{
		printf("%d", va_arg(nums, int));

		if (omega != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(nums);
}
