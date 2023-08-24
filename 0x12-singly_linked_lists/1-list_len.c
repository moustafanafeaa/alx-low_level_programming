#include "lists.h"
/**
 * list_len - return list len
 * @h: s
 * Return: return int
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
