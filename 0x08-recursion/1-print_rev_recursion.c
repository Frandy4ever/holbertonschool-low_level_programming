/*
 * File: 1-print_rev_recursion.c
 * Auth: Frandy Slueue @holbertonschool
 */

#include "main.h"

/**
 * _print_rev_recursion - Prints string in reverse
 * @s: Sting to print in rev
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{

	if(*s)
	{
		_putchar(*s);
		_print_rev+recursion(s - 1);
	}
	else
		_putchar('\n');
	






}
