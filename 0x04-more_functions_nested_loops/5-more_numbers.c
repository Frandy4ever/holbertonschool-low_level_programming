/*
 * File: 5-more_numbers.c
 * Auth: Frandy Slueue @holbertonschool
 */

#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prints 0 to 14 x10  using _putchar
 *
 * Return: 0 to 14 x10
 */

void more_numbers(void)
{

int max = 14;

for (int a = 1; a <= 10; a++)
{

for (int c = 0; c <= max; c++)
{
_putchar(c);
}

_putchar('\n');
}
}
