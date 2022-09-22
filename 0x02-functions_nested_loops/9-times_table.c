/*
* File: 9-times_table.c
* Auth: Frandy Slueue @holbertonschool
*/

#include "main.h"


/**
* times_table - Prints the times up to 9
* starting from 0
*
*/

void times_table(void)

{
int frandy, g, slueue;

for (frandy = 0; frandy <= 9; frandy++)
_putchar('0');

for (g = 1; g <= 9; g++)
{
_putchar(',');
_putchar(' ');

slueue = frandy * g;

if (slueue <= 9 )
_putchar(' ');

else
_putchar((slueue / 10) + '0');

_putchar((slueue % 10) + '0');
}

_putchar('\n');

}
}
