/*
 * File: 3-print_numbers.c
 * Auth: Frandy Slueue @holbertonschool
 */

#include "main.h"
#include <stdio.h>

/**
 * print_numbers - Prints numbers from 0 - 9 with only _putchar
 *
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

