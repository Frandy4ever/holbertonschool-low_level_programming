/*
 * File: 7-print_diagonal.c
 * Auth: Frandy Slueue @holbertonschool
 */

#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - prints a diagonal line of length n
 * @n: length of diagonal
 *
 * Return: void
 */

void print_diagonal(int n)
{

int a, b;

if (n <= 0)
_putchar('\n');

for (a = 0; a < n; a++)
{

for (b = 0; b < a; b++)
{
_putchar(' ');
}

_putchar('\\');
_putchar('\n');

}
}

