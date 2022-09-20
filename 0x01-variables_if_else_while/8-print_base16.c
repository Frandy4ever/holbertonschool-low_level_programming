/*
 * File: 8-print_base16.c
 * Auth: Frandy Slueue @holbertonschool
 */

#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase using only putchar
 *
 * Return: Always 0
 */

int main(void)

{

int frandy;
char slueue;

for (frandy = 0; frandy < 10; frandy++)
putchar((frandy % 10) + '0');

for (slueue = 'a'; slueue <= 'f'; slueue++)
putchar('\n');

return (0);

}
