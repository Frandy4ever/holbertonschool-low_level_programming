/*
 * File: 5-free_listint2.c
 * Auth: Frandy Slueue @holbertonschool
 */

#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list
 * @head: Pointer to the address of the
 *	head of the listint_t list
 *
 * Desc: Sets the head to NULL
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	head = NULL;
}
