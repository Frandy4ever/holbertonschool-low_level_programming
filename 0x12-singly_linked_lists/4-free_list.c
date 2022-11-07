/*
 * File: 4-free_list.c
 * Auth: Frandy Slueue @holbertonschool
 */

#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees a linked list node
 * @head: A first node in the linked list
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{

		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
