#include "main.h"
#include <stdio.h>

/**
 * main - print
 * @argc: argument
 * @argv: argument
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
		printf("%s\n", argv[i++]);
	return (0);
}
