/*
 * File: 9-insert_nodeint.c
 * Auth: Frandy Slueue @holbertonschool
 */

#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given
 *	position in a linked list
 * @head: Pointer to the address of the head
 *		of the linked list
 * @idx: The index of the linked list where the new
 *	node is to be added
 * @n: Integer for the new node to contain
 *
 * Return: Null if fails, otherwise, address f the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *copied = *head;
	unsigned int listNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;

	if (idx == 0)
	{
		newNode->next = copied;
		*head = newNode;
		return (newNode);
	}

	for (listNode = 0; listNode < (idx - 1); listNode++)
	{
		if (copied == NULL || copied->next == NULL)
			return (NULL);

		copied = copied->next;
	}

	newNode->next = copied->next;
	copied->next = newNode;

	return (newNode);
}
