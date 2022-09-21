/*
 * File: 0-putchar.c
 * Auth: Frandy G. Slueue @holbertonschool
 */
#include <stdio.h>

/**
 * main - Prints _putchar, followed by a new line
 *
 * Return: Always 0
 */

int main(void)

{

int frandy[] = {95, 112, 117, 116, 99, 104, 97, 114};
int g, slueue;

slueue = sizeof(frandy) / sizeof(int);
for (g = 0; g < slueue; g++)

{

putchar(frandy[g]);

}

putchar('\n');
return (0);

}
