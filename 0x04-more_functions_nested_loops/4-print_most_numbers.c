/*
 * File: 4-print_most_numbers.c
 * Auth: Frandy Slueue @holbertonschool
 */

#include "main.h"

/**
 * print_most_numbers -  prints the numbers, from 0 to 9
 * scapping 2 and 4
 *
 * Return: void
 */

void print_most_numbers(void)
{
int i;
for (int i = 0; i <= 9; i++)
{
if (i == 2 && i == 4)
{ continue; }
_putchar(i);
}
_putchar('\n');

}
