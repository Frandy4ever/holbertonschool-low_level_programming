/*
 * File: 6-pop_listint.c
 * Auth: Frandy Slueue @holbertonschool
 */

#include "lists.h"

/**
 * pop_listint - Deletes the head node of a linked list
 * @head: Pointer to the address of the
 *	head of the linked list
 *
 * Return: 0 if linked list is empty
 *	otherwise, head node's data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;

	int retourne;

	if (*head == NULL)
		return (0);

	temp = *head;
	retourne = (*head)->n;
	*head = (*head)->next;

	free(temp);

	return (retourne);
}
