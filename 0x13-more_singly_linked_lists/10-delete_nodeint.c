/*
 * File: 10-delete_nodeint.c
 * Auth: Frandy Slueue @holbertonschool
 */

#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given
 *                           index of a listint_t list.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 * @index: The index of the node to be deleted - indices start at 0.
 *
 * Return: On success - 1.
 *         On failure - -1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *copied = *head;
	unsigned int listNode;

	if (copied == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(copied);
		return (1);
	}

	while (listNode < (index - 1))
	{
		if (copied->next == NULL)
			return (-1);
		listNode++;

		copied = copied->next;
	}

	temp = copied->next;
	copied->next = temp->next;
	free(temp);
	return (1);
}
