/*
 * File: 3-puts.c
 * Auth: Frandy Slueue @holbertonschool
 */

#include "main.h"

/**
 * _puts - Prints string to stdout
 * @str: string to print
 *
 * Return: String
 */

void _puts(char *str)
{

int i = 0;

while (*(str + i))
{

_putchar(*(str + i));
i++;

}
_putchar('\n');

}
