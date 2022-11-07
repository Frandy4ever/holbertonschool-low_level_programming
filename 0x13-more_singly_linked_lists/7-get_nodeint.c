/*
 * File: 7-get_nodeint.c
 * Auth: Frandy Slueue @holbertonschool
 */

#include "lists.h"

/**
 * get_nodeint_at_index - locates a given
 *	node of a listint_t linked list
 * @head: A pointer to the head of the listint_t list
 * @index: The index of the node to locate -- start at 0
 *
 * Return: Null if does not exist
 *	otherwise, locate node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int nodeToLocate = 0;

	while (nodeToLocate < index)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
		nodeToLocate++;
	}

	return (head);
}


