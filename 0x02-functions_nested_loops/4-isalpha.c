/*
 * File: 4-isalpha.c
 * Auth: Frandy Slueue @holbertonschool
 */

#include "main.h"

/**
 * _isalpha - checks for alphabetic characters
 * @frandy: character to check
 *
 * Return: 0 or 1
 */

int _isalpha(int frandy)

{

if ((frandy >= 'a' && frandy <= 'z') || (frandy >= 'A' && frandy <= 'Z'))
return (1);

else
return (0);

}
