#include "lists.h"
/**
 * sum_listint - calculates the sum of all the data in a listint_t list
 * @head: first node in the linked list
 *
 * Return: The resulting sum
 */
int sum_listint(listint_t *head)
{
	int somme = 0;
	listint_t *tamp = head;

	while (tamp)
	{
		somme += tamp->n;
		tamp = tamp->next;
	}

	return (somme);
}
