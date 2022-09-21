/*
 * File: 0-putchar.c
 * Auth: Frandy G. Slueue @holbertonschool
 */
#include "main.h"

/**
 * main - Prints _putchar, followed by a new line
 *
 * Return: Always 0
 */

int main(void)

{

int frandy = 0;
char slueue;
char g[] = "_putchar\n";

while (frandy <= 8)
{

slueue = g[frandy];
_putchar(slueue);

frandy++;
}

return (0);

}
