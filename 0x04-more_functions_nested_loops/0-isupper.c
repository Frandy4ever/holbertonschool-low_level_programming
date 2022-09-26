/*
 * file: 0-isupper.c
 * Auth: Frandy Slueue @holbertonschool
 */
#include "main.h"
#include <ctype.h>

/**
 *_isupper - Checks for uppercase character
 *@c: uppercase character
 * Return: 1 or 0
 */

int _isupper(int c)
{

if (isupper(c))
return (1);

else
return (0);
}
