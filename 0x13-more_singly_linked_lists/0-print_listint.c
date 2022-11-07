/*
 * File: 0-print_listint.c
 * Auth: Frandy Slueue @holbertonschool
 */

#include "lists.h"

/**
 * print_listint - Prints all elements of a listint_t list
 * @h: Pointer to the head of the  list_t list
 *
 * Return: The number of nodes in the list_t list
 */

size_t print_listint(const listint_t *h)
{
	size_t listNodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		listNodes++;
		h = h->next;
	}

	return (listNodes);
}
