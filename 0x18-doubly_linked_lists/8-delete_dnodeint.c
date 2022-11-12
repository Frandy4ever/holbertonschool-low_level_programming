/*
 * File: 8=delete_dnodeint.c
 * Auth: Frandy Slueue @holbertonschool
 */

#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node from a dlistint_t
 *                            at a given index.
 * @head: A pointer to the head of the dlistint_t.
 * @index: The index of the node to delete.
 *
 * Return: Upon success - 1.
 *         Otherwise - -1.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *headNode;

	if (*headNode == NULL)
		return (-1);

	for (; index != 0; index--)
	{
		if (temp == NULL)
			return (-1);
		temp = temp->next;
	}

	if (temp == *headNode)
	{
		*headNode = temp->next;
		if (*headNode != NULL)
			(*headNode)->prev = NULL;
	}

	else
	{
		temp->prev->next = temp->next;
		if (temp->next != NULL)
			temp->next->prev = tmp->prev;
	}

	free(temp);
	return (1);
}
