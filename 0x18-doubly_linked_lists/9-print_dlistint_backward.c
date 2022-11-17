/*
 * File: 9-print_dlistint_backward.c
 * Auth: Frandy Slueue @holbertonschool
 */

#include "lists.h"

/**
 * print_dlistint_backward - Prints all the elements of
 *			a dlistint_t list backward
 * @h: Pointer to nodes to be printed
 *
 * Return: Number of nodes
 */
size_t print_dlistint_backward(const dlistint_t *h)
{

	size_t nodes = 0;

	while (h)
	{
		print_dlistint_backward(h->next);
		printf("%d\n", h->n);
		h = h->next;
		nodes += 1;
	}

	return (nodes);

}
