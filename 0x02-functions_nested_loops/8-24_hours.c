/*
* File: 8-24_hours.c
* Auth: Frandy Slueue @holbertonschool
*/

#include "main.h"

/**
* jack_bauer - every minute of the day of Jack Bauer,
* starting from 00:00 to 23:59
*
*/



void jack_bauer(void)

{

int frandy, slueue;

for (frandy = 0; frandy <= 23; frandy++)

{

for (slueue = 0; slueue <= 59; slueue++)

{

_putchar((frandy / 10) + '0');
_putchar((frandy % 10) + '0');
_putchar(':');
_putchar((slueue / 10) + '0');
_putchar((slueue % 10) + '0');
_putchar('\n');
}
}
}
