/*
 * File: 9-print_comb.c
 * Auth: Frandy Slueue @holbertonschool
 */

#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers
 * separated by ',' followed by a space using only putchar
 */

int main(void)
{

int frandy;

for (frandy = 0; frandy <= 9; frandy++)

{
putchar((frandy % 10) + '0');
if (frandy == 9)
continue;

putchar(',');
putchar(' ');
}

putchar('\n');

return (0);

}
