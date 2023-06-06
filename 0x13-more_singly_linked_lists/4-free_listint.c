#include "lists.h"
/**
 * free_listint - frees a linked list
 * @head: listint_t list to be freed
 * return: void
 */
void free_listint(listint_t *head)
{
	listint_t *tamp;

	while (head)
	{
		tamp = head->next;
		free(head);
		head = tamp;
	}
}
