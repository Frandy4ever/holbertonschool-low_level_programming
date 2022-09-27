/*
 * File: 4-print_most_numbers.c
 * Autho: Frandy Slueue @holbertonschool
 */

#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - Prints numbers from 0 - 9
 * except 2 and 4 using _putchar
 *
 * Return: Numbers 0 - 9 except 2 and 4
 */

void print_most_numbers(void)

{

char c;

for (c = '0'; c <= '9'; c++)
{
if (c == '2' || c == '4')

{
continue;
}

_putchar(c);
}

_putchar('\n');

}
