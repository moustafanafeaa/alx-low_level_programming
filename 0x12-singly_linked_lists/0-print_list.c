#include "main.h"
/**
 * _len - return length of string
 * @s : string
 * Return: return integer
 */
int _len(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}

/**
 * print_list - print ls
 * @h: point to first node
 * Return: size
 */
size_t print_list(const list_t *h)
{
	size i = 0;

	while (h)
	{
		print("[%d] %s\n", _len(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		i++;
	}
	return (i);
}
