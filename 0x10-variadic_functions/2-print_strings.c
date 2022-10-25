/*
 * File: 2-print_strings.c
 * Auth: Frandy Slueue @holbertonschool
 */

#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_strings - prints strings, followed be new line
 * @separator: string to be printed between strings
 * @n: n number of strings passed to the function
 *
 * Details: if separator is NULL, it is not printed
 *	if on of th strings is NULL, (nil) is printed instead
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int omega;

	va_start(strings, n);

	for (omega = 0; omega < n; omega++)
	{

		str = va_arg(strings, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (omega != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(strings);
}
