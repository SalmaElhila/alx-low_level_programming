#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success) otherwise -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tamp = *head;
	listint_t *current = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tamp);
		return (1);
	}

	while (i < index - 1)
	{
		if (!tamp || !(tamp->next))
			return (-1);
		tamp = tamp->next;
		i++;
	}


	current = tamp->next;
	tamp->next = current->next;
	free(current);

	return (1);
}
