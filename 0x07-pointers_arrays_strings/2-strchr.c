#include "main.h"
/**
 * *_strchr - function that locates a character in a string.
 *
 * @s: string thst scanned
 * @c: char that search from 
 *
 * Return: return string 
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (c == s[i])
			return (&s[i]);
	}
	return (0);
}
