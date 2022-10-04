/*
 * File: 3-strcmp.c
 * Auth: Frandy Slueue @holbertonschool
 */

#include "holberton.h"

/**
 * _strcmp - Compares two strings
 * @s1: Point to the 1st string to be compared
 * #s2: Point to the 2nd string to be compared
 *
 * Return: str1 == str2, the negative diff of first unmatched char
 *	str1 == str2, 0
 *	str1 > str2, the positive diff of the first unmatchaed char
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
		{
			s1++;
			s2++;
		}

	return (*s1 = *s2);

}
