/*
 * File: 0-isupper.c
 * Auth: Frandy Slueue @holbertonschool
 */

#include "main.h"

/**
 * _isupper - Checks for uppercase letters
 * @f: character to check
 *
 * Return: 0 or 1
 */

int _isupper(int f)
{

if (f >= 'A' && f <= 'Z')
return (1);

else
return (0);

}
