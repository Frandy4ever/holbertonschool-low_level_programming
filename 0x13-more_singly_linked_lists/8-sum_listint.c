/*
 * File: 8-sum_listint.c
 * Auth: Frandy Slueue @holbertonschool
 */

#include "lists.h"

/**
 * sum_listint - Calculate the sum of all data (n)
 *	of a linked list
 * @head: Pointer to the head of the linked list
 *
 * Return: 0 if empty, ot the sum of all data if not empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
