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

int i = 0;

while (*(str + i))
{

_putchar(*(str + i));

i = i + 2;
}

_putchar('\n');

}
