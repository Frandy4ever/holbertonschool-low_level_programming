/*
 * File: 6-print_numberz.c
 * Auth: Frandy Slueue @holbertonschool
 */

#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0
 * only using putchar
 * Return: Always 0
 */

int main(void)

{

int frandy;

for (frandy = 0; frandy < 10; frandy++)

putchar((frandy % 10) + '0');


putchar('\n');

return (0);

}
