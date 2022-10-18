/*
 * File: 1-isdigit.c
 * Auth: Frandy Slueue @holbertonschool
 */

#include "main.h"
#include <stdio.h>

/**
 * _isdigit - Checks for digits from 0 - 9
 * @c: character to show
 *
 * Return: 1 or 0
 */

int _isdigit(int c)
{

if (c >= '0' && c <= '9')
return (1);

else
return (0);

}
