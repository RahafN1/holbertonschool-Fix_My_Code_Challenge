#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t list
 * @head: pointer to the head of the list
 * @index: index of the node that should be deleted (starts at 0)
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *save_head;
	dlistint_t *tmp;
	unsigned int p;

	if (head == NULL || *head == NULL)
		return (-1);
	save_head = *head;
	p = 0;
	while (p < index && *head != NULL)
	{
		*head = (*head)->next;
		p++;
	}
	if (*head == NULL)
	{
		*head = save_head;
		return (-1);
	}
	tmp = *head;
	if (index == 0)
	{
		*head = save_head->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		(*head)->prev->next = (*head)->next;
		if ((*head)->next != NULL)
			(*head)->next->prev = (*head)->prev;
		*head = save_head;
	}
	free(tmp);
	return (1);
}
