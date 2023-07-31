#include "main.h"
/**
 * *_strpbrk - function that searches a string for any of a set of bytes.
 *
 * @s: string thst scanned
 * @accept: char that search from 
 *
 * Return: return string 
 */
char *_strpbrk(char *s, char *accept)
{
	int n;

	while (*s)
	{
		for (n = 0; s[n] != '\0'; n++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (0);
}
