/*
 * File: 3-add_nodeint_end.c
 * Auth: Frandy Slueue @holbertonschool
 */

#include "lists.h"

/**
 * add_nodeint_end - Adds a new node to the end
 *	of the listint_t list
 * @head: Pointer to the address of the head of
 * the listint_t list
 * @n: Integer for the new node to contain
 *
 * Return: Null if fails, otherwisee, the address
 *		of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *lastNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
		*head = newNode;

	else
	{
		lastNode = *head;
		while (lastNode->next != NULL)
			lastNode = lastNode->next;
		lastNode->next = newNode;
	}
	return (*head);
}
