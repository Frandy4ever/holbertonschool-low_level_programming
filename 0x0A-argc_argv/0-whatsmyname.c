#include "main.h"
#include <stdio.h>

/**
 * main - prints the name of the file
 * @argc: argument count
 * @argv: argument pass to main as an array of strings
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}
