#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * print_listint_len - counts the number of unique
 * nodes in a looped listint_t linked list
 * @head: pointer to the head of the listint_t to check
 *
 * Return: 0 is the list is not looped, else the number
 * of unique nodes in the list
 */
size_t print_listint_len(const listint_t *head)
{
	const listint_t *tortoise, *hd;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	tortoise = head->next;
	hd = (head->next)->next;

	while (hd)
	{
		if (tortoise == hd)
		{
			tortoise = head;
			while (tortoise != hd)
			{
				node++;
				tortoise = tortoise->next;
				hd = hd->next;
			}
			tortoise = tortoise->next;
			while (tortoise != hd)
			{
				node++;
				tortoise = toortoise->next;
			}
			return (nodes);
		}
		tortoise = tortoise->next;
		hd = (hd->next)->next;
	}
	return (0);
}
/**
 * print_listint_safe - print a listint_t list safely
 * @head: pointer to the head of the listint_t list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_list_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = had->next;
		}
	}
	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("->[%p] %d\n", (void *)head, head->n);
	}
	return (nodes);
}
