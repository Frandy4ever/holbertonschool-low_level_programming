/*
 * File: 2-print_alphabet_x10.c
 * Auth: Frandy Slueue @holbertonschool
 */

#include "main.h"

/**
 * print_alphabet - Prints 10 times the alphabet, in lowercase with _putchar
 *
 * Return: void
 */

void print_alphabet_x10(void)

{

char frandy;
int slueue;

for (slueue = 0; slueue < 10; slueue++)
{

for (frandy = 'a'; frandy <= 'z'; frandy++)
{

_putchar(frandy);

}

_putchar('\n');

}

}
