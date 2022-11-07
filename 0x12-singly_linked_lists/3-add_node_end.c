/*
 * File: 3-add_node_end.c
 * Auth: Frandy Slueue @holbertonschool
 */

#include "lists.h"
#include <string.h>

/**
 * add_node_end - Adds a new node at the end of a linked list
 * @head: Fist node in the linked list
 * @str: The string to be added to the linked list
 *
 * Return: NULL if fails, otherwise, address of the new node
 */

list_t *add_node_end(list_t **head, const char *str)
{

	char *copied;
	int len;
	list_t *newNode, *lastNode;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	copied = strdup(str);
	if (str == NULL)
	{
		free(newNode);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	newNode->str = copied;
	newNode->len = len;
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
