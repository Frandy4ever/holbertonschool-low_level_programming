/*
 * File: 6-print_line.c
 * Auth: Frandy Slueue @holbertonschool
 */

#include "main.h"
#include <stdio.h>

/**
 * print_line - Draws straight line in the terminal
 * using _putchar
 * @n: number of times lines are printed
 *
 * Return: void
 */

void print_line(int n)
{

int i;

for (i = 0; i < n; i++)
{

_putchar('_');
}

_putchar('\n');

}
