/*
 * File: 3-print_numbers.c
 * Auth: Frandy Slueue @holbertonschool
 */

#include "main.h"

/**
 * print_numbers - prints numbers, from 0 to 9,
 * followed by a new line
 *
 * Return: 0
 */

void print_numbers(void)
{

int num;

for (num = 0; num <= 9; num++)
{
_putchar(num);
}
_putchar("\n");

}
