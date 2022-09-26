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

char f;

for (f = '0'; f <= '9'; f++)
{

_putchar(f);

}

_putchar('\n');

} 
