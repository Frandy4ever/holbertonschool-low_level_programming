/*
 * File: 1-swap.c
 * Auth: Frandy Slueue @holbertonschool
 */

#include "main.h"
#include <stdio.h>

/**
 * swap_int - Swaps the values of two integers
 * @*a: first integer to be swapped
 * @*b: second integer to be swapped
 *
 * Return: swapped result
 */

void swap_int(int *a, int *b)
{

int c;

c = *a;
*a = *b;
*b = c;

}
