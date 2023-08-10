#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * len - length of string
 * @str: str
 * @Return: num
 */
unsigned int len(char *s)
{
	unsigned int size;

	for (size = 0; s[size] != '\0'; size++)
        ;

	return (size);
}
/**
 * string_nconcat - function that concatenates two strings.
 * @n: unsigned int length of s2
 * @s1: string 1
 * @s2: string2
 * Return: return string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	char *p;

	if (n == 0)
		exit(0);

	p = malloc(sizeof(char)* (n + len(s1)) + 1);
	if (p == NULL)
		return (NULL);

	for (i = 0; i <= len(s1); i++)
	{
		p[i] = s1[i];
	}
	for (i = 0; i < n; i++)
	{
		p[len(s1) + i] = s2[i];
	}
	return (p);
}
