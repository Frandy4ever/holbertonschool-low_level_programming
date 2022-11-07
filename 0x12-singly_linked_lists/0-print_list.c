/*
 * File: 0-print_list.c
 * Auth: Frandy Slueue @holbertonschool
 */

#include "lists.h"
#include <stdio.h>


/**
 * print_list - Prints all elements of a list_t link list
 * @h: pointer to the first node in the link list
 *
 * Return: Number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	size_t linkedNodes = 0;


	while (h)
	{
		if (h->str == NULL)

			printf("[0] (nil)\n");

		else

			printf("[%d] %s\n", h->len, h->str);

		linkedNodes++;
		h = h->next;

	}

	return (linkedNodes);
}
