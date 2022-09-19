/*
 * File: 0-positive_or_negative.c
 * Auth: Frandy Slueue @holbertonschool
 */
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* Betty style doc for function main goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%i is zero\n", n);
}
else if (n == 0)
{
printf("%i is zero\n", n);
}
else if (n < 0)
{
printf("%i is negative\n", n);
}
return (0);
}

