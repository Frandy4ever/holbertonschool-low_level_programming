#include <unistd.h>

/**
 * _putchar - write the character c to stdout
 * @c: The character to print
 *
 *
 * Return: on success `.
 * On error, -1 is returned, and error is set appropretelyl
 * */

_putchar(char c)

	return (write(1, &c, 1));
