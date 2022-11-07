/*
 * File: 2-add_nodeint.c
 * Auth: Frandy Slueue @holbertonschool
 */

#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning
 *				of a listint_t
 * @head: Pointer to the address of the
 *		head of the listint_t list
 * @n: The integer for the new node to contain
 *
 * Return: If the function fails - NULL
 *		otherwise the address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;

	*head = newNode;

	return (newNode);
}


