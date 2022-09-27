/*
 * File: 5-rev_string.c
 * Auth: Frandy Slueue @holbertonschool
 */

#include "main.h"
#include <stdio.h>

/**
 * rev_string - Reverses a string
 * @s: string to be reversed
 *
 * Return: void
 */

void rev_string(char *s)
{

int i = 0, f = 0;
char str[500];

while (*(s + i))
{

*(str + i) = *(s + i);
i++;

}

i = i - 1;
while (i >= 0)

{
*(s + i) = *(str + f);
f++;
i--;

}
}
