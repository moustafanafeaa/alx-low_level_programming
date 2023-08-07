#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - function that concatenates two strings.
 * @s1:string 1
 * @s2: str 2
 * Return: return pointer
 */
char *str_concat(char *s1, char *s2)
{
	int size1 = 0, size2 = 0, i, j;
	char *new;

	for (i = 0; s2[size2] != '\0'; size2++)
	;

	for (i = 0; s1[size1] != '\0'; size1++)
	;	
	new = malloc((size1+size2) * sizeof(char) + 1);

	for (i = 0; i < size1; i++)
	{
		new[i] = s1[i];
	}
	for (i = size1, j = 0; j < size2; i++, j++)
		new[i] = s2[j];

	return (new);
}
