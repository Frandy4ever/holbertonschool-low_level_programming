/*
 * File: 100-prime_factor.c
 * Auth: Frandy Slueue @holbertonschool
 */


#include <stdio.h>

/**
 * main - prints the largest prime factor for 612852475143
 *
 * Return: Always 0
 */

int main(void)
{

unsigned long int i, n = 612852475143;

for (i = 3; i < 782849; i = i + 2)
{

while ((n % i == 0) && (n != i))
n = n / i;

}
printf("%lu\n", n);
return (0);

}
