/*
 * file: 0-isupper.c
 * Auth: Frandy Slueue @holbertonschool
 */
#include "main4.h"
#include <ctype.h>

/**
 * int _isupper - Checks for uppercase character
 *
 * Return: 1 or 0
 */

int _isupper(int c)
{

if (isupper(c))
return (1);

else
return (0);
}
