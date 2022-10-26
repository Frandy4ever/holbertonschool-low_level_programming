/*
 * File: 3-print_all.c
 * Autho: Frandy Slueue @holbertonschool
 */

#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * pr_int - prints an integer type
 * @val: a va_list struct to process
 */
void pr_int(va_list val)
{
	printf("%d", va_arg(val, int));
}

/**
 * pr_char - prints a char type
 * @val: a va_list struct to process
 */
void pr_char(va_list val)
{
	printf("%c", va_arg(val, int));
}

/**
 * pr_float - prints a double type
 * @val: a va_list struct to process
 */
void pr_float(va_list val)
{
	printf("%f", va_arg(val, double));
}

/**
 * pr_str - prints a string type or (nil) empty/NULL
 * @val: a va_list struct to process
 */
void pr_str(va_list val)
{
	char *r;

	r = va_arg(val, char *);
if (r == NULL)
	r = "(nil)";
printf("%s", r);
}

/**
 * print_all - print all arguments that matches with format
 * @format: type to print out
 * @...: argument to print
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i, j;
	va_list args;
	char *sep;

p_op storage[] = {
		{"c", pr_int},
		{"f", pr_float},
		{"s", pr_str},
		{"i", pr_int},
	};
	i = 0;
	sep = "";
	va_start(args, format);

	while (format != NULL && format[i / 4] != '\0')
	{
		j = i % 4;
		if (storage[j].op[0] == format[i / 4])
		{
			printf("%s", sep);
			storage[j].f(args);
			sep = ", ";
		}
		i++;
	}
	printf("\n");
	va_end(args);
}


