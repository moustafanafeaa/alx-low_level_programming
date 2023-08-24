#include "lists.h"
/**
 * add_node - add node to ls
 * @head: address
 * @str: str
 * Return: return int
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_head = malloc(size(list_t));

	if (!head || !new_head)
		return (0);
	if (str)
	{
		new_head->str = strdup(str);
		if (!new_head->str)
		{
			free(new_head);
			return (NULL);
		}
		new_head->len = _len(new_head->str);
	}
	new_head->next = *head;
	*head = new_head;
	return (new_head);
}
