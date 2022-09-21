/*
 * File: 11-print_to_98.c
 * Auth: Frandy Slueue @holbertonschool
 */

#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints from any integer to 98
 * @n: integer input
 *
 * Return: void
 */

void print_to_98(int n)

{

while (n != 98)
{
printf("%i, ", n);
if (n > 98)
n++;
}

printf("98\n");

}
