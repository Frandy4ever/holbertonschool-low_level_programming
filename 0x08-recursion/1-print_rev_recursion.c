/*
 * File: 1-print_rev_recursion.c
 * Auth: Frandy Slueue @holbertonschool
 */

#include "main.h"

/**
 * _print_rev_recursion - Prints string in reverse
 * @s: Sting to print in rev
 *
 */

void _print_rev_recursion(char *s)
{

	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}


}
