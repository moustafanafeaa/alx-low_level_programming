#include "main.h"
#include <stdio.h>
#include <stdlib.h>
char *_mset(char *str, char x, unsigned int num);
/**
 * _mset - fills memory
 * @str: pointer
 * @x: char equal
 * @num:size
 * Return: return pointer
 */
char *_mset(char *str, char x, unsigned int num)
{
	char *po = str;

	while (num--)
		*str++ = x;
	return (po);
}
/**
 * _calloc - function that allocates memory for an array,
 *  using malloc.
 * @size: unsigned int size of arr.
 * @nmemb: unsinged arr
 * Return: return pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(sizeof(int) * nmemb);
	if (p == NULL)
		return (NULL);

	_mset(p, 0, sizeof(int) * nmemb);

return (p);
}
