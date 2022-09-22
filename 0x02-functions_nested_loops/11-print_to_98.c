/*
 * File: 11-print_to_98.c
 * Auth: Frandy Slueue @holbertonschool
 */

#include "main.h"
#include <stdio.h>

/**
* print_to_98 - Prints from any integer to 98
* @frandy: integer input
*
*/

void print_to_98(int frandy)

{
if (frandy >= 98)
{

while (frandy > 98)
printf("%d, ", frandy--);
printf("%d\n", frandy);

}
else
{

while (frandy < 98)
printf("%d, ", frandy++);
printf("%d\n", frandy);
}

}
