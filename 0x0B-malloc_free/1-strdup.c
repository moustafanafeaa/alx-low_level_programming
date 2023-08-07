#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - function that returns a pointer to a newly
 * allocated space in memory,
 *which contains a copy of the string given as a parameter.
 * @str:size of int
 * Return: return pointer
 */
char *_strdup(char *str)
{
	int i, size = 0;
	char *ps;

	if (str == 0)
		return (NULL);

	for (i = 0; str[size] != '\0'; size++)
	;

	ps = malloc(size * sizeof(*str) + 1);

	if (ps != 0)
	{
		for (i = 0; i < size; i++)
		{
			ps[i] = str[i];
		}
	}
	else
		return (NULL);
return (ps)
}
