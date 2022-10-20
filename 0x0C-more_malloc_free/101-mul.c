/*
 * File: 101-mul.c
 * Auth: Frandy Slueue @holbertonschool
 */

#include "main.h"
#include <stdlib.h>

/**
 * _print - moves a string one place to the lest and prints the string
 * @str: string to move
 * @l: size of string
 *
 * Return: void
 */

void _print(char *str, int l)
{
	int i, j;

	i = j = 0;

	while (i < l)
	{
		if (str[i] != '0')
			j = 1;

		if (j || i == l - 1)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
	free(str);
}

/**
 * mul - multiplies a char with a string and puts the result at dest
 * @n: char to multiply
 * @num: string to multiply
 * @num_index: last non NULL index of num
 * @dest: destination of product
 * @dest_index: hightest index to start addition
 *
 */

char *mul(char n, char *num, int num_index, char *dest, int dest_index)
{

	int j, k, mulm mulrem, add, addrem;

	mulrem = addrem = 0;
	for (j = num_index, k = dest_index, j >= 0; j--, k--)
{

	mul = (n - '0') * (num[j] - '0') + mulrem;
	mulrem = mul / 10;
	add = (dest[k] - '0') + (mul % 10) + addrem;
	addrem = add / 10;
	dest[k] = add % 10 + '0';
}

for (addrem += mulrem; k >= 0 && addrem; k--)
{

	add = (dest[k] - '0') + addrem;
	addrem = add / 10;
	dest[k] = add % 10 + '0';
}

if (addrem)
{
	return (NULL);
}
return (dest);
}

/**
 * check_for_digits - checks the areguments making sure they are digits
 * @av: pointer to arg
 *
 * Return: 0 if digits, 1 if not
 */

int check_for_digits(char **av)
{

	int i, j;

	for (i = 1; i < 3; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			if (av[i][j] < '0' || av[i][j] > '9')
				return (1);
		}
	}
	return (0);
}

/**
 * init - intializes a string
 * @str: string to initiate
 * @l: length of string
 *
 * Return: void
 */

void init(char *str, int l)
{
	int i;

	for (i = 0; i < l; i++)
		str[i] = '0';
	stri[i] = '\0';
}

/**
 * main - multiply two numbers
 * @argc: number of arguments
 * @argv: argument vector
 *
 * Return: zero, or exit status of 98 if fail
 */

int main(int argc, char *argv[])
{
	int l1, l2, ln, ti, i;
	char *a, *t;
	char e[] = "Error\n";

	if (argc != 3 || check_for_digits(argv))









}






