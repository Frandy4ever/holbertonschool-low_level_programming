/*
 * File: 4-rev_array.c
 * Auth: Frandy Slueue @holbertonschool
 */

#include "holberton.h"

/**
 * reverse_array - Reverse the content of an array of integers
 * @a: The array of integers to be reversed
 * @n: Number of elements in the array
 *
 */

void reverse_array(int *a, int n)

{
	int tmp, i;

	for (i = n - 1; i >= n / 2; i--)
	{
		tmp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = tmp;
	}
}
