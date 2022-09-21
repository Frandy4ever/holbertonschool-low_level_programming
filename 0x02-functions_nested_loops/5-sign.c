/*
 * File: 5-sign.c
 * Auth: Frandy Slueue @holbertonschool
 */

#include "main.h"

/**
 * print_sign - Checks for integer sign
 * @n: integer to check
 *
 * Return: 0 or 1
 */

int print_sign(int frandy)

{


if (frandy > 0)

{

_putchar(43);

return (1);

}

else if (frandy == 0)

{

_putchar(48);

return (0);

}

else

{

_putchar(45);

return (-1);

}

}
