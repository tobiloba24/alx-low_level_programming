#include "lists.h"

/**
 * add_nodeint - this adds a new node at the begnning of a linkled list
 * @head: pointer to the first node
 * @n: data to insert
 * Return: pointer to new node or NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
