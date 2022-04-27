#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - A function that inserts node at given index
 * @head: A pointer to listint_t structure
 * @idx: The index of the list
 * @n: An integer data for new node
 * Return: The address to new node at specified index, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp;
	unsigned int i = 0;

	if (*head == NULL && idx != 0)
		return (NULL);
	if (idx != 0)
	{
		temp = *head;
		for (; i < idx - 1 && temp != NULL; i++)
			temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}
