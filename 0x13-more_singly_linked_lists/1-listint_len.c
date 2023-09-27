#include "lists.h"

/**
 * listint_len - the number of elemets in a linked list returned
 * @h: linked list of type listint_t
 *
 * Return: the nodes number
 */

size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
