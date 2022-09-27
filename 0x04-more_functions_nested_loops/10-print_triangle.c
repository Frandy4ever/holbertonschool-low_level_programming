/*
 * File: 10-print_triangle.c
 * Auth: Frandy Slueue @holbertonschool
 */

#include "main.h"
#include <stdio.h>

/**
 * print_triangle - prints a triangle with size 0 or less
 * @size: size of the triangle
 *
 * Return: void
 */

void print_triangle(int size)
{

int a, b;

if (size <= 0)
_putchar('\n');

for (a = 1; a <= size; a++)
{

for (b = 1; b <= size; b++)
{

if (b <= (size - a))
_putchar(' ');

else
_putchar('#');

}
_putchar('\n');

}
}
