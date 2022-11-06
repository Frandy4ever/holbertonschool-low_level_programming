/*
 * File: 0-print_list.c
 * Auth: Frandy Slueue @holbertonschool
 */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "list.h"

/**
 * size_t print_list - Prints all elements of a list_t list
 * @h: pointer to the first node in the link list
 *
 * Return: Number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	size_t listNode = 0;


	while (h)
	{
		if (h->str == NULL)

			printf("[0] (nil)\n");

		else

			printf("[%d] %s\n", h->len, h->str);

		listNode++;
		h = h->next;

	}

	return (listNode);
}
