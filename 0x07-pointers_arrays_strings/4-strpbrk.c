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
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (*s == accept[n])
			{
				return (s);
			}
		}
		s++;
	}
	return (0);
}
