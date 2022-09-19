/*
 * File: 3-print_alphabets.c
 * Auth: Frandy Slueue @holbertonschool
 */
#include <stdio.h>

/**
 * main _ Prints the alphabet in lowercase then in uppercase
 *
 * Return: Always 0.
 *
 */

int main(void)
{

char frandy;
char slueue;

for (frandy = 'a'; frandy <= 'z'; frandy++)
putchar(frandy);

for (slueue = 'A'; slueue <= 'Z'; slueue++)
putchar(slueue);

putchar('\n');

return (0);

}
