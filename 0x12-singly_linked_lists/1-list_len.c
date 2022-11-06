/*
 * File: 1-list_len.c
 * Auth: Frandy Slueue @holbertonschool
 */

#include "list.h"

/**
 * list_len - Finds the number of elements in a linked list
 * @h: The linked list
 *
 * Return: The number of elements at point h
 */

size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}

	return (elements);
}
