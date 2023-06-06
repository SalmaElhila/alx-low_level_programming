#include "lists.h"
/**
 * free_listint2 - frees a linked list
 * @head: pointer to the listint_t list to be freed
 * return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *tamp;

	if (head == NULL)
		return;

	while (*head)
	{
		tamp = (*head)->next;
		free(*head);
		*head = tamp;
	}

	*head = NULL;
}
