/*
 * File: 4-print_alphabt.c
 * Auth: Frandy Slueue @holbertonschool
 *
 */
#include <stdio.h>

/**
 * main - Prints alphabet in lowercase except q and e
 *
 * Return: Always 0.
 *
 */

int main(void)
{
char frandy;

for (frandy = 'a'; frandy <= 'z'; frandy++)
{
if (frandy != 'e' && frandy != 'q')
putchar(frandy);
}
putchar('\n');

return (0);

}
