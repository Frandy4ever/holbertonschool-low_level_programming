/*
 * File: 2-strchr.c
 * Auth: Frandy Slueue @holbertonschool
 */

#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: string to check
 * @c: character to check for
 *
 * Return: pointer to spot in s with c or NULL
 */

char *_strchr(char *s, char c)
{
int i;

for (i = 0; *(s + i); i++)

{

if (*(s + i) == c)
return (s + i);
}

if (*(s + i) == c)
return (s + i);
return (0);
}
