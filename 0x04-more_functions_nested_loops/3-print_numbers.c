/*
 * File: 3-print_numbers.c
 * Auth: Frandy Slueue @holbertonschool
 */

#include "main.h"

/**
 * print_numbers - prints numbers, from 0 to 9,
 * followed by a new line
 *@c: used to print int

 * Return: void
 */

void print_numbers(void)
{

char c;

for (c = '0'; c <= '9'; c++)
{

_putchar(c);

}

_putchar('\n');

}
