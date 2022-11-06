/*
 * File: 2-add_node.c
 * Auth: Frandy Slueue @holbertonschool
 */

#include "list.h"
#include <string.h>

/**
 * add_node - Adds a new node at the beginning of a linked list
 * @head: The first node in the linked list structure
 * @str: The string to be added to the linked list structure
 *
 * Return: Null if fails, otherwise, address of the new node
 */

list_t *add_node(list_t **head, const char *str)
{
	char *copied;
	int len;
	list_t *newNode;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	copied = strdup(str);
	if (copied == NULL)
	{
		free(newNode);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	newNode->str = copied;
	newNode->len = len;
	newNode->next = *head;

	*head = newNode;

	return (newNode);

}
