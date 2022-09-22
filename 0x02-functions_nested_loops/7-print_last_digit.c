/*
 * File: 7-print_last_digit.c
 * Auth: Frandy Slueue @holbertonschool
 */

#include "main.h"

/**
 * print_last_digit - the last digit of a number
 * @frandy: find the last digit
 *
 * Return: Value of the last digit.
 */
int print_last_digit(int frandy)

{

int slueue = frandy % 10;

if (slueue < 0)
slueue *= -1;

_putchar(slueue + '0');

return (slueue);

}

