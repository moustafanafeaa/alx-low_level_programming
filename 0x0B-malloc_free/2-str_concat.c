#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - function that concatenates two strings.
 * @s1:string 1
 * @s2: str 2
 * Return: return pointer
 */
char *str_concat(char *s1, char *s2)
{
	int size1 = 0, size2 = 0, i;
	char *new;

	if (s2 != '\0')
	{	for (i = 0; s2[size2] != '\0'; size2++)
		;
	}
	if (s1 != '\0')
	{
		for (i = 0; s1[size1] != '\0'; size1++)
		;
	}

	new = malloc((size1 + size2) * sizeof(char) + 1);

	for (i = 0; i < size1 + size2; i++)
	{
		if (i < size1)
			new[i] = s1[i];
		else
			new[i] = s2[i - size1];
	}
	new[i] = '\0';
	return (new);
}
