/*
 * File: 4-print_rev.c
 * Auth: Frandy Slueue @holbertonschool
 */

#include "main.h"
#include <stdio.h>

/**
 * print_rev - Prints a string in reverse
 * @s: string to print in reverse
 *
 * Return: void
 */

void print_rev(char *s)
{

int i = 0;

while (*(s + i))
i++;

i = i - 1;

while (i >= 0)
{

_putchar(*(s + i));
i--;
}

_putchar('\n');

}
