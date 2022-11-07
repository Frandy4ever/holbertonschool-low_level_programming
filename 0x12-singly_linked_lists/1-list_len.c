/*
 * File: 1-list_len.c
 * Auth: Frandy Slueue @holbertonschool
 */

#include "lists.h"

/**
 * list_len - Finds the number of elements in a linked list
 * @h: The linked list
 *
 * Return: The number of elements at point h
 */

size_t list_len(const list_t *h)
{
	size_t linkedNodes = 0;

	while (h)
	{
		linkedNodes++;
		h = h->next;
	}

	return (linkedNods);
}
