/*
 * File: 0-isupper.c
 * Auth: Frandy Slueue @holbertonschool
 */

#include "main.h"

/**
 * _isupper - Checks for uppercase letters
 * @c: character to check
 *
 * Return: 0 or 1
 */

int _isupper(int c)
{

if (c >= 'A' && c <= 'Z')
return (1);

else
return (0);

}
