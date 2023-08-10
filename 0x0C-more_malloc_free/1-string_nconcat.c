#include "main.h"
#include <stdio.h>
#include <stdlib.h>
unsigned int len(char *s);
char *string_nconcat(char *s1, char *s2, unsigned int n);
/**
 * len - length of string
 * @s: str
 * Return: num
 */
unsigned int len(char *s)
{
	unsigned int size;

	for (size = 0; s[size] != '\0'; size++)
	;

	return (size);
}
unsigned int len(char *s);
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
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	p = malloc(sizeof(char) * (n + len(s1)) + 1);
	if (p == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		p[i] = s1[i];
	}
	for (i = 0; i < n; i++)
	{
		p[len(s1) + i] = s2[i];
	}
	p[-1] = '\0';
	return (p);
}
