#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a given position in a
 *                            doubly linked list.
 * @head: Double pointer to the head of the list.
 * @index: Index of the node to delete. Index starts at 0.
 *
 * Return: 1 if the deletion succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *temp, *prev_node;
unsigned int i;

if (head == NULL || *head == NULL)
	return (-1);

temp = *head;
prev_node = NULL;

for (i = 0; i < index && temp != NULL; i++)
{
prev_node = temp;
temp = temp->next;
}

if (temp == NULL)
	return (-1);

if (prev_node == NULL)
	*head = temp->next;
else
	prev_node->next = temp->next;

if (temp->next != NULL)
	temp->next->prev = prev_node;

free(temp);
return (1);
}
