#include <stdio.h>
#include <stdlib.h>
#include "list.h"

/**
 * free_list - frees a link list
 * @head: double pointer to list_t list to be freed
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
