/*
 * File: 1-listint_len.c
 * Auth: Frandy Slueue @holbertonschool
 */

#include "lists.h"

/**
 * listint_len - Returns the number of elements
 *		in a linked listint_t list
 * @h: A pointer to the head of the listint_t list
 *
 * Return: The number of elements in the listint_t list
 */
size_t listint_len(const listint_t *h)
{
	size_t linkedNodes = 0;

	while (h)
	{
		linkedNodes++;
		h = h->next;
	}
	return (linkedNodes);
}
