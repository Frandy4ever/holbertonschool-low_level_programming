/*
 * File: 2-strlen.c
 * Auth: Frandy Slueue @holbertonschool
 */

#include "main.h"

/**
 * _strlen - returns the length of a string
 * @*s: string whose length to print
 *
 * Return: string length
 */

int _strlen(char *s)
{

int i = 0;

while (*(s + i))
i++;

return (i);

}
