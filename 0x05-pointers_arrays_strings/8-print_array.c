/*
 * File: 8-print_array.c
 * Auth: Frandy Slueue @holbertonscool
 */

#include "main.h"
#include <stdio.h>

/**
 * print_array - print n elements of an array of int
 * @a: element to print
 * @n: int to print
 *
 * Return: void
 */

void print_array(int *a, int n)
{

int i = 0;

while (i < n)
{

printf("%d", a[i]);

if (i < (n - 1))
printf(", ");

i++;
}

printf("\n");

}
