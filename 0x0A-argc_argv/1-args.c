#include "main.h"
#include <stdio.h>

/**
 * main - print the num
 * @argc: argument count
 * @argv: argument
 *
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{

	if (argc > 0)
		printf("%d\n", argc - 1);

	return (0);
}
