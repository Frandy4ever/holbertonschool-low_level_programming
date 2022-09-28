/*
 * File: 6-puts2.c
 * Auth: Frandy Slueue @holbertonschool
 */

#include "main.h"
#include <stdio.h>

/**
 * puts2 - Prints every other character of a string
 * @str: character to print
 *
 * Return: void
 */

void puts2(char *str)
{

int i, a;

i = 0;

while (str[i] != '\0')
i++;

i--;

for (a = 0; a <= i; a++)
{

if (a % 2 == 0)

_putchar(str[a]);
}

_putchar('\n');

}
