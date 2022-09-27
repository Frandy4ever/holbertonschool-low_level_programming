/*
 * File: 7-puts_half.c
 * Auth: Frandy Slueue @holbertonschool
 */

#include "main.h"
#include <stdio.h>

/**
 * puts_half - Prints the second half of a string
 * @str: string to print
 *
 * Return: void
 */

void puts_half(char *str)
{

int  f, i = 0;

while (*(str + i))
i++;

f = i / 2;

if (i % 2)
f += 1;

while (f < i)
{

_putchar(*(str + f));
f++;

}
_putchar('\n');

}
