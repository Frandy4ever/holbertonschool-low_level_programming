/*
 * File: 0-isupper.c
 * Auth: Frandy Slueue @holbertonschool
 */

#include "main.h"
#include <stdio.h>

/**
 * _isupper - Checks for uppercase letters
 * @c: character to check
 *
 * Return: 1 or 0
 */

int _isupper(int c)
{

if (c >= 'A' && c <= 'Z')
return (1);

else
return (0);

}
