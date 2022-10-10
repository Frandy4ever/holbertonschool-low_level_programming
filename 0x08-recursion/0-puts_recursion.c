/*
 * File: 0-puts_recursion.c
 * Auth: Frandy Slueue @holbertonschool
 */

#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - Prints a string
 * @s: String to be writtenk
 *
 * Return: void
 */

void _puts_recursion(char *s)
{


	if (*s)
{
	_putchar(*s);
	_puts_recursion(s + 1);
}
	else
	_putchar('\n');
}
